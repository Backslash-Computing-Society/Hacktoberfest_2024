def water_jug(capacity_jug1, capacity_jug2, target):
    visited = set()

    def dfs(jug1, jug2, steps):
        if (jug1, jug2) in visited:
            return False
        
        visited.add((jug1, jug2))

        if jug1 == target or jug2 == target:
            print("\nSteps:")
            for step in steps:
                print(step)
            return True
        
        # Fill jug1
        if dfs(capacity_jug1, jug2, steps + [(jug1, jug2, f"Fill jug1 ({capacity_jug1}/{capacity_jug1})")]):
            return True
        
        # Fill jug2
        if dfs(jug1, capacity_jug2, steps + [(jug1, jug2, f"Fill jug2 ({capacity_jug2}/{capacity_jug2})")]):
            return True
        
        # Empty jug1
        if dfs(0, jug2, steps + [(jug1, jug2, "Empty jug1 (0/0)")]):
            return True
        
        # Empty jug2
        if dfs(jug1, 0, steps + [(jug1, jug2, "Empty jug2 (0/0)")]):
            return True
        
        # Pour from jug1 to jug2
        pour_amount = min(jug1, capacity_jug2 - jug2)
        if dfs(jug1 - pour_amount, jug2 + pour_amount, steps + [(jug1, jug2, f"Pour from jug1 to jug2 ({pour_amount}/{capacity_jug2-jug2})")]):
            return True
        
        # Pour from jug2 to jug1
        pour_amount = min(jug2, capacity_jug1 - jug1)
        if dfs(jug1 + pour_amount, jug2 - pour_amount, steps + [(jug1, jug2, f"Pour from jug2 to jug1 ({pour_amount}/{capacity_jug1-jug1})")]):
            return True
        
        return False
    
    return dfs(0, 0, [])

# Example usage:
capacity_jug1 = 5
capacity_jug2 = 3
target = 4

if water_jug(capacity_jug1, capacity_jug2, target):
    print(f"\nThe target amount of water ({target} liters) can be obtained.")
else:
    print(f"\nThe target amount of water ({target} liters) cannot be obtained.")

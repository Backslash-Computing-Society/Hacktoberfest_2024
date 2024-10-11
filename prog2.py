'''Accumulation - Accumulating a final result
sum_until_0: Continuously read integers from standard input until you receive a zero. Print the sum of these integers.
total_price: Continuously read pairs of integers from standard input, representing the quantity and price of items, until you receive the string "END". Print the total price of all items.
Filtering - Selecting based on a criterion
only_ed_or_ing: Continuously read strings from standard input until you encounter the word "STOP" (case insensitive and not included in the output). Print only those strings that end with "ed" or "ing" (case insensitive).
reverse_sum_palindrome: Continuously read positive integers from standard input until you encounter a "-1"(not included in the output). Print only those integers for which the sum of the number and its reverse is a palindrome.
Mapping - Applying the same operation to different items
double_string: Continuously read lines from standard input until an empty line is encountered. Print each line repeated twice.
odd_char: Continuously read strings from standard input until you encounter a string ending with a "."(include that string with the "." in the output). Extract characters at odd positions (starting from 1) of each line, and print the results in a single line separated by spaces.
Filter and Map - Applying an operation to selected items
only_even_squares: Continuously read numbers from standard input until "NAN" is encountered. Print the square of each number only if it is even.
Filter and Accumulate - Accumulating a result with selected items
/only_odd_lines: Continuously read lines from standard input until "END"(not included in the output) is encountered. Create a string by prepending only the odd lines (starting from 1) with a newline character in between, and print the result which will be the odd lines in reverse order.'''
# Note this prefix code is to verify that you are not using any for loops in this exercise. This won't affect any other functionality of the program.
'''with open(__file__) as f:
    content = f.read().split("# <eoi>")[2]
if "for " in content:
    print("You should not use for loop or the word for anywhere in this exercise")
'''
# This is the first line of the exercise
task = input()
# <eoi>

if task == "sum_until_0":
    total = 0
    n = int(input())
    while n != 0: # the terminal condition
        total += n # add n to the total
        n = int(input()) # take the next n form the input
    print(total)

elif task == "total_price":
    total_price = 0
    while True: # repeat forever since we are breaking inside
        line = input()
        if line == "END":
           break  # Exit the loop if the input is "END"
        parts = line.split()
        if len(parts) == 2 and parts[0].isdigit() and parts[1].isdigit():
            quantity = int(parts[0])
            price = int(parts[1])
            total_price += quantity * price  # Calculate total price
        else:
            print("Please enter valid pairs of integers or 'END' to finish.")
    print(total_price)


elif task == "only_ed_or_ing":
    word = input()
    while word.lower() != "stop":
       if word.lower().endswith("ed") or word.lower().endswith("ing"):
            print(word)
       word = input()

elif task == "reverse_sum_palindrome":
    num = int(input())
    while num != -1:
        reverse_num = int(str(num)[::-1])
        if str(num + reverse_num) == str(num + reverse_num)[::-1]:  # Check if the sum is a palindrome
            print(num)
        num = int(input())

elif task == "double_string":
    line = input()
    while line != "":
        print(line*2)
        line = input()

elif task == "odd_char":
    result = []
    line = input()
    while not line.endswith("."):
        result.append(line[::2])
        line = input()
    result.append(line[::2])
    print(" ".join(result))

elif task == "only_even_squares":
    num = input()
    while num != "NAN":
        num = int(num)
        if num % 2 == 0:
            print(num ** 2)
        num = input()

elif task == "only_odd_lines":
    lines = []
    line = input()
    while line != "END":
        lines.append(line)
        line = input()

    odd_lines = []
    i = 0
    while i < len(lines):
       if i % 2 == 0:
            odd_lines.append(lines[i])
       i += 1

    print("\n".join(reversed(odd_lines)))
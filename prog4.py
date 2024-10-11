'''Permutation (permutation): Given a string s, print all the possible two-letter permutations(without repitition) of the 
letters in the string.
Sorted Permutation (sorted_permutation): Given a string s, print all the possible two-letter permutations(without repetition) 
of the letters in the string where the first character comes before the second one in alphabetical order. 
The order in which the permutations are printed is same as the previous one (Type: Filtering).
Repeat the Repeat (repeat_the_repeat): Given a number n, print the numbers from 1 to n in the same line and repeat this n times.
Repeat Incrementally (repeat_incrementally): Given a number n, print a pattern where the k-th line contains the first k numbers
and there are n lines in total. For example, if n is 4, the output should be:
1
12
123
1234
Increment and Decrement (increment_and_decrement): Given a number n, print a pattern where the k-th line should have the
numbers from 1 to k and then back down to 1. For example, if n is 4, the output should be:
1
121
12321
1234321'''
task = input()
while True:
    if task == 'exit':
        break
    elif task == 'permutation':
        s = input()
        for i in range(len(s)):
            for j in range(len(s)):
                if i != j:
                    print(s[i] + s[j])
    elif task == 'sorted_permutation':
        s = input()
        for i in range(len(s)):
            for j in range(len(s)):
                if i != j and s[i] < s[j]:
                    print(s[i] + s[j])
    elif task == 'repeat_the_repeat':
        n = int(input())
        for _ in range(n):
            print(''.join(str(i) for i in range(1, n + 1)))
    elif task == 'repeat_incrementally':
        n = int(input())
        for i in range(1, n + 1):
            print(''.join(str(j) for j in range(1, i + 1)))
    elif task == 'increment_and_decrement':
        n = int(input())
        for i in range(1, n + 1):
            print(''.join(str(j) for j in range(1, i + 1)) + ''.join(str(j) for j in range(i - 1, 0, -1)))

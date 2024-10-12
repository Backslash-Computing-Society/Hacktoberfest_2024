'''n = int(input())
    k = int(input())
    count = 0
    c = k-1
    while count < n :
        if '5' not in str(c) and '9' not in str(c) and c % 2 != 0:
            rev = int(str(c)[::-1])
            print(rev)
            count += 1
        c -= 1'''


n = int(input())
k = int(input())
count = 0
c = k-1
flag = True
if (flag == True):
    for count in range(100):
        if '5' not in str(c) and '9' not in str(c) and c % 2 != 0:
            rev = int(str(c)[::-1])
            print(rev)
            count += 1
            if (count == n):
                  flag == False
        c -= 1













# Input values
#n = int(input("Enter n (must be less than 100): "))
#k = int(input("Enter k (must be less than 100): "))

# Ensure n and k are both less than 100
#if n >= 100 or k >= 100:
  #  print("Both n and k must be less than 100.")
#else:
  #  count = 0

    # Iterate from k - 1 down to 1 (inclusive)
   # for current_number in range(k - 1, 99, -1):  
        # Check if the number is valid: no '5' or '9' and is odd
      #  if '5' not in str(current_number) and '9' not in str(current_number) and current_number % 2 != 0:
            # Reverse the digits of the number
      #      reversed_number = int(str(current_number)[::-1])
     #       print(reversed_number)  # Print the reversed number
      #      count += 1  # Increment the count of valid numbers

        #if count >= n:  # Stop if we've printed n valid numbers
        #    break
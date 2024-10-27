def is_palindrome(s):
    # Convert the string to lowercase to make it case-insensitive
    s = s.lower()
    
    # Compare the string with its reverse
    return s == s[::-1]

# Example usage
word = "madam"
if is_palindrome(word):
    print(f"'{word}' is a palindrome.")
else:
    print(f"'{word}' is not a palindrome.")

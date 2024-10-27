#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(const char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        // Ignore non-alphanumeric characters and convert to lowercase
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        while (left < right && !isalnum(str[right])) {
            right--;
        }

        if (tolower(str[left]) != tolower(str[right])) {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }

    return 1; // Is a palindrome
}

int main() {
    const char *testStr = "A man, a plan, a canal: Panama";
    
    if (isPalindrome(testStr)) {
        printf("\"%s\" is a palindrome.\n", testStr);
    } else {
        printf("\"%s\" is not a palindrome.\n", testStr);
    }

    return 0;
}

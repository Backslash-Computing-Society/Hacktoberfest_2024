#include <stdio.h>
#include <ctype.h>  // For tolower()

int countVowels(char *str) {
    int count = 0;
    char ch;

    // Loop through each character of the string
    for (int i = 0; str[i]; i++) {
        ch = tolower(str[i]);  // Convert character to lowercase
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;  // Increment count if it is a vowel
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string

    // Remove newline character, if present
    str[strcspn(str, "\n")] = 0;

    int vowelCount = countVowels(str);

    printf("Number of vowels: %d\n", vowelCount);

    return 0;
}

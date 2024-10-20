#include <stdio.h>
#include <string.h>

int countVowels(const char *str) {
    int count = 0;
    char vowels[] = "aeiouAEIOU"; // List of vowels (both lowercase and uppercase)

    // Iterate through each character in the string
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel
        for (int j = 0; j < strlen(vowels); j++) {
            if (str[i] == vowels[j]) {
                count++;
                break; // Stop checking after the first match
            }
        }
    }

    return count;
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    int vowelCount = countVowels(str);
    printf("Number of vowels in the string: %d\n", vowelCount);

    return 0;
}

#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

char firstNonRepeatingCharacter(const char *str) {
    int charCount[MAX_CHAR] = {0};
    
    // Count occurrences of each character
    for (int i = 0; str[i]; i++) {
        charCount[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    for (int i = 0; str[i]; i++) {
        if (charCount[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // Return null character if no non-repeating character found
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    char result = firstNonRepeatingCharacter(str);
    if (result != '\0') {
        printf("The first non-repeating character is: %c\n", result);
    } else {
        printf("No non-repeating character found.\n");
    }

    return 0;
}

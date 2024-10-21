#include <stdio.h>
#include <string.h>

#define MAX_CHARS 256 // Assuming ASCII character set

char firstNonRepeatingCharacter(const char *str) {
    int charCount[MAX_CHARS] = {0}; // Array to store character counts

    // Count occurrences of each character
    for (int i = 0; str[i] != '\0'; i++) {
        charCount[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    for (int i = 0; str[i] != '\0'; i++) {
        if (charCount[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // Return null character if no non-repeating character found
}

int main() {
    const char *testStr = "swiss"; // Example string

    char result = firstNonRepeatingCharacter(testStr);
    if (result) {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("There are no non-repeating characters.\n");
    }

    return 0;
}

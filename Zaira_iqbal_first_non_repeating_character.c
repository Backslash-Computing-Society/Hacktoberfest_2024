#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

char firstNonRepeatingCharacter(const char *str) {
    int count[ASCII_SIZE] = {0}; // Initialize count array to 0
    int i;

    // Count occurrences of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Find the first non-repeating character
    for (i = 0; str[i] != '\0'; i++) {
        if (count[(unsigned char)str[i]] == 1) {
            return str[i];
        }
    }

    return '\0'; // Return null character if there is no non-repeating character
}

int main() {
    const char *str = "swiss";
    char result = firstNonRepeatingCharacter(str);
    
    if (result != '\0') {
        printf("The first non-repeating character is: '%c'\n", result);
    } else {
        printf("There are no non-repeating characters.\n");
    }

    return 0;
}

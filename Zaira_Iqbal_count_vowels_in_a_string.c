#include <stdio.h>

int countVowels(const char *str) {
    int count = 0;
    char vowels[] = "aeiouAEIOU"; // Include both lowercase and uppercase vowels

    // Iterate through the string
    while (*str != '\0') {
        // Check if the current character is a vowel
        for (int i = 0; vowels[i] != '\0'; i++) {
            if (*str == vowels[i]) {
                count++;
                break; // No need to check further vowels
            }
        }
        str++;
    }

    return count;
}

int main() {
    const char *str = "Hello World!";
    int vowelCount = countVowels(str);
    printf("Number of vowels: %d\n", vowelCount);
    return 0;
}

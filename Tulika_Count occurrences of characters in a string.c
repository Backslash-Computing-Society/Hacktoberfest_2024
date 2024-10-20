#include <stdio.h>
#include <string.h>

#define MAX_CHAR 256

void countCharacters(char *str) {
    int count[MAX_CHAR] = {0};  // Array to store the count of characters

    // Loop through each character of the string and increment the count
    for (int i = 0; str[i]; i++) {
        count[(unsigned char)str[i]]++;
    }

    // Print the count of each character
    printf("Character Count:\n");
    for (int i = 0; i < MAX_CHAR; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Read input string

    // Remove newline character, if present
    str[strcspn(str, "\n")] = 0;

    countCharacters(str);

    return 0;
}

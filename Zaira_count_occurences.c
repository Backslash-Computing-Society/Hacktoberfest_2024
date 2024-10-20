#include <stdio.h>

#define ASCII_SIZE 256

void countCharacters(const char *str) {
    int count[ASCII_SIZE] = {0}; // Initialize count array to 0
    int i = 0;

    // Count occurrences of each character
    while (str[i] != '\0') {
        count[(unsigned char)str[i]]++;
        i++;
    }

    // Print the counts
    for (i = 0; i < ASCII_SIZE; i++) {
        if (count[i] > 0) {
            printf("'%c' : %d\n", i, count[i]);
        }
    }
}
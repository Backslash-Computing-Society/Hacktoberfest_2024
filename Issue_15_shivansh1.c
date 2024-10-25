#include <stdio.h>
#include <string.h>

//Hello here i solved the issue 15 
//also whoever you are must be tired from hardwok, take a rest :)

int main() {
    char str[100];
    int count[256] = {0}; // ASCII character set size
    int i;

    printf("Enter a string: ");
    gets(str); 

    // Count occurrences of each character
    for (i = 0; str[i] != '\0'; i++) {
        count[str[i]]++;
    }

    // Print the results
    printf("Character occurrences:\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("%c: %d\n", i, count[i]);
        }
    }

    return 0;
}

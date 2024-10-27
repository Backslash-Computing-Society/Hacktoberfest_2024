#include <stdio.h>
#include <ctype.h>


int countVowels(char str[]) {
    int count = 0;
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = tolower(str[i]); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


    str[strcspn(str, "\n")] = 0;

    int vowelCount = countVowels(str);
    printf("The number of vowels in the string is: %d\n", vowelCount);

    return 0;
}

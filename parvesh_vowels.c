#include <stdio.h>
#include <math.h>
int main(){
int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n);

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*");  
            } else {
                printf(" ");  
            }
        }
        printf("\n");
   }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("*");
        }

        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i) {
                printf("*");  
            } else {
                printf(" *");  
            }
        }
        printf("\n");
    }

    return 0;
}
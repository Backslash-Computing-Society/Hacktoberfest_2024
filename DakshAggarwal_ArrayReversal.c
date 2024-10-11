// Reversing a custom array of 'n' elements

#include <stdio.h>

int main(){
    int i, n;

    printf("How many elements does your array have? ");
    scanf("%d", &n);

    int arr_1[n], arr_2[n];

    for(i = 0; i <= n-1; i++){
        printf("Enter the array element (int only): ");
        scanf("%d", &arr_1[i]);
    }

    for(i = n-1; i >= 0; i--){
        arr_2[n-1-i] = arr_1[i];
    }

    printf("The original array is: ");

    for(i = 0; i <= n-1; i++){
    printf("%d ", arr_1[i]);
    }

    printf("\nThe reversed array is: ");

    for(i = 0; i <= n-1; i++){
    printf("%d ", arr_2[i]);
    }

    return 0;
}
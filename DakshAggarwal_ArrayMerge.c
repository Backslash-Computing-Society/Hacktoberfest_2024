#include <stdio.h>

int main()
{
    int i, n1, n2;
    
// Getting the arrays from the user
    printf("How many elements does your first array have? ");
    scanf("%d", &n1);
    
    int arr_1[n1];

    for(i = 0; i < n1; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_1[i]);
    }

    printf("How many elements does your second array have? ");
    scanf("%d", &n2);
    
    int arr_2[n2];

    for(i = 0; i < n2; i++){
        printf("Enter the element: ");
        scanf("%d", &arr_2[i]);
    }

    int arr_3[n1 + n2];

    for(i = 0; i < n1; i++){
        arr_3[i] = arr_1[i]; 
    }

    for(i = 0; i < n2; i++){
        arr_3[i + n2] = arr_2[i];
    }

// Printing the merged arrays
    printf("Here's your merged array: ");
    for(i = 0; i < n1 + n2; i++){
        printf("%d ", arr_3[i]);
    }

    return 0;
}
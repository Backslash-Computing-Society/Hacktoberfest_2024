#include <stdio.h>

int main() {
    int n, i, j, count;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n], freq[n];
    

    printf("Enter the elements of the array: \n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1; // Initialize the frequency array with -1
    }
    
    for(i = 0; i < n; i++) {
        count = 1;
        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark as visited
            }
        }
        if(freq[i] != 0) {
            freq[i] = count;
        }
    }
    
 
    printf("\nFrequency of each element:\n");
    for(i = 0; i < n; i++) {
        if(freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }
    
    return 0;
}

#include <stdio.h>

int findMissingNumber(int arr[], int size) {
    int total = (size + 1) * (size + 2) / 2; // Sum of first n natural numbers
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i]; // Sum of elements in the array
    }

    return total - sum; // The missing number
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // Example array with one missing number (3)
    int size = sizeof(arr) / sizeof(arr[0]);

    int missingNumber = findMissingNumber(arr, size);
    printf("The missing number is: %d\n", missingNumber);

    return 0;
}

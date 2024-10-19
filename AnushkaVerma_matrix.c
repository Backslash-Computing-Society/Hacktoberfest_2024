#include <stdio.h>

void shiftElements(int arr[][100], int n, int m, int row, int col, int value) {
    int lastValue = value;
    for (int i = row; i < n; i++) {
        for (int j = col; j < m; j++) {
            int temp = arr[i][j];
            arr[i][j] = lastValue;
            lastValue = temp;
        }
        col = 0;  
    }
}

int main() {
    int n, m;
    printf("Enter the number of rows and columns of the array: ");
    scanf("%d %d", &n, &m);
    
    int arr[100][100];   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int row, col, value;
    printf("Enter the row and column where you want to insert the new value: ");
    scanf("%d %d", &row, &col);
    printf("Enter the value to be inserted: ");
    scanf("%d", &value);
    row--;
    col--;
    shiftElements(arr, n, m, row, col, value);
    printf("Array after insertion:\n");
    int newN = n + 1;  // Add one more row
    for (int i = 0; i < newN; i++) {
        for (int j = 0; j < m; j++) {
            if (i >= n && j >= col) {
                printf("0 ");
            } else {
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

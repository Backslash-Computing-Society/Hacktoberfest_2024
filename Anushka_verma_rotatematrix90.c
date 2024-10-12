//*****Rotate a matrix 90 degrees clockwise
#include<stdio.h>
int main(){
    int n;
    printf("enter the number of rows/columns : ");
    scanf("%d", &n);
    int arr[n][n];
    
    //input
    printf("enter the values to array :");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("matrix is : \n");
      for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n"); 
        }

    //transpose
      for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){ // or  for(int j=0; j<i; j++)
            int temp = arr[i][j];        
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    printf("transpose matrix is : \n");
      for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n"); 
        }

    //reverse
    for(int i=0; i<n; i++){
        int j= 0, k = n-1;           // k = n-1-j
        while(j<k){
            int temp = arr[i][j];
            arr[i][j]= arr[i][k];
            arr[i][k] = temp;
            j++;
            k--;
        }
    }
    printf("rotated matrix is : \n");
      for (int i = 0; i < n; i++) {
        for (int j = 0; j <n; j++) {
            printf("%d \t", arr[i][j]);
        }
        printf("\n"); 
        }
    return 0;
}
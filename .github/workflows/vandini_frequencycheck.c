#include<stdio.h>

// Main function to run the program
int main() 
{ 
    int arr[] = {10, 30, 10, 20, 10, 20, 30, 10}; 
    int n = sizeof(arr)/sizeof(arr[0]); 

    int visited[n];
 
    for(int i=0; i<n; i++){

       if(visited[i]==0){
          int count = 1;
          for(int j=i+1; j<n; j++){
             if(arr[i]==arr[j]){
                count++;
                visited[j]=1;
             }
          }

          printf("%d occurs %d times\n", arr[i], count);
       }
   }

   return 0; 
}
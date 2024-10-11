#include<stdio.h>
int  length(char arr[]);
int main(){
    char name[100];
    fgets(name,100,stdin);
    printf("Lenght is : %d",length(name));
    
    return 0;
}
int length(char arr[]){
    int count =0;
    for(int i=0;arr[i] != '\0';i++){
        count++;
    }
    return count-1;
}
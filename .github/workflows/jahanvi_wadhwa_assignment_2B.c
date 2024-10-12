#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the table no.: ");
    scanf("%d",&n);
    for(i=n;i<=10*n;i=i+n){
        
        printf("%d\n",i);
    }
}
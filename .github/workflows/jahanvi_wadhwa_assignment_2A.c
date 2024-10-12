
#include <stdio.h>
int main()
{
    int i,n;
    printf("Enter the no.: ");
    scanf("%d",&n);
    
    for (i=2; i<=n-1; i++){

        if(n%i==0){
            printf("The no. is composite");
            break;

        }
        else{
            printf("The no. is prime");
            break;
        }
    }
    // for 2,1,0 the loop will not work so.....
    if(n==2)
    printf("2 is only even prime no.");
    else if(n==1 || n==0)printf("no. is neither prime nor composite");
}
    

#include <stdio.h>
void TOH(int n,char A,char B,char C)
{
    if(n==0)
    {
        return ;
    }
    else
    {
        TOH(n-1,A,C,B);
        printf("\n Move bead %d from %c to %c",n,A,C);
        TOH(n-1,C,B,A);
    }
}
int main()
{
    int n;
    printf("Input the number of beads :");
    scanf("%d",&n);
    TOH(n,'a','b','c');
    return 0;
}
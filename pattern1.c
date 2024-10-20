#include <stdio.h>
int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int k=1;k<=4-i;k++)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            if(i%2==0)
            {
            char ch=(char)(j+64);
            printf("%c",ch);
            }
            else
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return 0;
}
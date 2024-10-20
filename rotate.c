#include <stdio.h>
int main()
{
    int len,i=0;
    printf("Input the size of array : ");
    scanf("%d",&len);
    int arr[len];
    printf("Input the elements : ");
    for(int i=0;i<len;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=len;
    printf("Rotated Array are : \n");
    while(c>0)
    {
        int temp=arr[len-1];
        for(i=len-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
        for(int i=0;i<len;i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
        c--;
    }
    return 0;
}
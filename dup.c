#include <stdio.h>
int main()
{
    int len;
    printf("Input the size of array : ");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Input the elements : ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<len;k++)
                {
                    arr[j]=arr[j+1];
                }
                len--;
                j--;
            }
        }
    }
    printf("New Array is : ");
    for(int i=0;i<len;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
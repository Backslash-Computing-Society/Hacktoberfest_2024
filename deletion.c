#include <stdio.h>
int main()
{
    int len,del,pos=0;
    printf("Input the size of array : ");
    scanf("%d",&len);
    int arr[len];
    for(int i=0;i<len;i++)
    {
        printf("Input the elements : ");
        scanf("%d",&arr[i]);
    }
    printf("Input the element to be deleted : ");
    scanf("%d",&del);
    for(int i=0;i<len;i++)
    {
        pos++;
        if(del==arr[i])
        break;
    }
    for(int i=pos-1;i<len-1;i++)
    {
        arr[i]=arr[i+1];
    }
    printf("New Array is : ");
    for(int i=0;i<len-1;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
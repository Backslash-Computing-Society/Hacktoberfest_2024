#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Input length : ";
    cin  >> len;
    int arr[len];
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    int num=1;
    while(num<len)
    {
        for(int i=0;i<len-num;i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        num++;
    }
    for(int i=0;i<len;i++)
    {
        cout<<arr[i];
    }
}
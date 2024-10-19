#include <iostream>
using namespace std;
void swap(int arr[], int len)
{
    for (int j = 0; j < len-1; j++)
    {
        if (arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
void bubble(int arr[], int len)
{
    if(len==1)
    return ;
    swap(arr,len);
    bubble(arr,len-1);
}
int main()
{
    int len;
    cout << "Input length : ";
    cin >> len;
    int *arr = new int[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    bubble(arr, len);
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
}
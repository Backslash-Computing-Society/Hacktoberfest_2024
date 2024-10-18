#include <iostream>
using namespace std;

int main()
{
    int len;
    cout << "Input length : ";
    cin  >> len;
    int arr[len],sum;
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<len;i++)
    {
        sum=0;
        for(int j=i;j<len;j++)
        {
            sum+=arr[j];
            cout<<sum<<endl;
        }
    }
}
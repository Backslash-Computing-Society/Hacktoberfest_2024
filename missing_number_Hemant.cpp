#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter number of elements: ";
    cin >> n;
    int arr[n];
    cout<<"enter elemengts"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for (int i=0;i<n-1;i++)
    {
        sum+=arr[i];
    }
    int missing =sum-n*(n+1)/2;
    cout << "missing number is "<< -missing;
}
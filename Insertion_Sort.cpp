#include<iostream>
using namespace std;
int main(){
    int a[] = {6,3,1,8,20,46,3,26,30,24};
    int n = sizeof(a) / sizeof(a[0]);
    int i,j,k,temp;
    for(i=1; i<n;i++){
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout<<"The sorted array is";
    for(k=0;k<n;k++){
        cout<<a[k]<<"\t";
    }
    return 0;
}
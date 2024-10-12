#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "enter string: ";
    cin >> str;
    string str1(str.rbegin(),str.rend());
    cout<<str1<<"  "<<str<<endl;
    if (str1!=str)
    {
        cout<<"string is not palindrome"<<endl;
    }
    else
    {
        cout<<"string is palindrome"<<endl;
    }
}
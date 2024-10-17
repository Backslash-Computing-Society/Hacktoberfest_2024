#include <iostream>
using namespace std;
bool ls(int arr[], int key, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == key)
        {
            cout << "FOUND AT " << i << " INDEX ." << endl;
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int key = 5;
    int len = sizeof(arr) / sizeof(int);
    if (!ls(arr, key, len))
        cout << "ELEMENT NOT FOUND ." << endl;
}
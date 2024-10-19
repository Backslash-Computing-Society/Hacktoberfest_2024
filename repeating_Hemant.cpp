#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter number of elements: ";
    cin >> n;
    char arr[n];
    cout << "enter elemengts" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            char temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        int count = 1;
        cout << arr[i] << ":";
        do
        {
            if (arr[i] == arr[i + 1])
            {
                count++;
                i++;
                x++;
            }
            else
            {
                x = 0;
            }
        } while (x != 0);
        cout << count << endl;
    }
}
#include <iostream>
using namespace std;
int findMissingNumber(int arr[], int n) {
    int totalSum = (n + 1) * (n + 2) / 2;
    int arraySum = 0;
    for (int i = 0; i < n; i++) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;
    return 0;
}

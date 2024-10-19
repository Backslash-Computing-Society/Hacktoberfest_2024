#include <iostream>
#include <climits>
using namespace std;
int findSecondLargest(int arr[], int n) {
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest == INT_MIN ? -1 : secondLargest;
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
    int result = findSecondLargest(arr, n);
    if (result != -1)
        cout << "The second largest element is: " << result << endl;
    else
        cout << "No second largest element found." << endl;
    return 0;
}

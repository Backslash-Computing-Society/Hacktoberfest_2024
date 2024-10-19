#include <iostream>
using namespace std;
void mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    while (i < n1)
        merged[k++] = arr1[i++];
    while (j < n2)
        merged[k++] = arr2[j++];
}
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first sorted array: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second sorted array: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    int merged[n1 + n2];
    mergeSortedArrays(arr1, n1, arr2, n2, merged);
    for (int i = 0; i < n1 + n2; i++)
        cout << merged[i] << " ";
    return 0;
}

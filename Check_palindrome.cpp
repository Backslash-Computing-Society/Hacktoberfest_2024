#include <iostream>
#include <string>
#include <algorithm> // for transform

using namespace std;

bool isPalindrome(string str) {
    // Convert the string to lowercase for case-insensitive comparison
    transform(str.begin(), str.end(), str.begin(), ::tolower);

    int start = 0;
    int end = str.length() - 1;

    // Check characters from both ends
    while (start < end) {
        // Ignore non-alphanumeric characters
        if (!isalnum(str[start])) {
            start++;
        } else if (!isalnum(str[end])) {
            end--;
        } else if (str[start] != str[end]) {
            return false;  // Not a palindrome
        } else {
            start++;
            end--;
        }
    }

    return true;  // String is a palindrome
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}

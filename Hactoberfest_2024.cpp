#include <iostream>
#include <vector>
#include <algorithm> 
#include <climits>
#include <set>
#include <unordered_set>
#include <list>
#include <map>
#include <stack>
#include <queue>
#include <math.h>
#include <limits.h>
#include <cmath>
#include <unordered_map>
#include <utility>
#include <numeric>
using namespace std;

int findSecondLargest(vector<int>& arr) {
     if (arr.size() < 2) {
        cout << "Array must have at least two elements.\n";
        return INT_MIN; 
     }

     int largest = INT_MIN;
     int second_largest = INT_MIN;

     for (int num : arr) {
          if (num > largest) {
               second_largest = largest;
               largest = num;
          } 

          else if (num > second_largest && num != largest) {
               second_largest = num;
          }
     }

     if (second_largest == INT_MIN) {
          cout << "There is no distinct second largest element.\n";
          return INT_MIN; 
     }   

     return second_largest;
}

int main() {
     vector<int> arr = {10, 5, 20, 20, 4}; 
     int result = findSecondLargest(arr);
     if (result != INT_MIN) {
          cout << "The second largest element is: " << result << endl;
     }
     return 0;
}

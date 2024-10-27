#include <iostream>
#include <vector>
#include <limits>

int findSecondLargest(const std::vector<int>& nums) {
    int largest = std::numeric_limits<int>::min();
    int secondLargest = std::numeric_limits<int>::min();

    for (int num : nums) {
        if (num > largest) {
            secondLargest = largest; // Update second largest
            largest = num; // Update largest
        } else if (num > secondLargest && num < largest) {
            secondLargest = num; // Update second largest if num is between largest and second largest
        }
    }

    return (secondLargest == std::numeric_limits<int>::min()) ? -1 : secondLargest; // Handle case where there's no second largest
}

int main() {
    std::vector<int> nums = {3, 5, 1, 4, 2}; // Example array
    int secondLargest = findSecondLargest(nums);
    
    if (secondLargest != -1) {
        std::cout << "The second largest element is: " << secondLargest << std::endl;
    } else {
        std::cout << "There is no second largest element." << std::endl;
    }

    return 0;
}

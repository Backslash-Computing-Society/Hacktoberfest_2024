#include <iostream>
#include <vector>

int findMissingNumber(const std::vector<int>& nums) {
    int n = nums.size() + 1; // Since one number is missing
    int expectedSum = n * (n + 1) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int num : nums) {
        actualSum += num;
    }

    return expectedSum - actualSum; // The missing number
}

int main() {
    std::vector<int> nums = {1, 2, 4, 5, 6}; // Example array with a missing number (3)
    int missingNumber = findMissingNumber(nums);
    std::cout << "The missing number is: " << missingNumber << std::endl;
    return 0;
}

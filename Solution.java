import java.util.Arrays;

public class Solution {
    
    // Swap two elements in the array
    public void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }

    // Reverse a subarray from index i to index j
    public void reverse(int[] nums, int i, int j) {
        while (i < j) {
            swap(nums, i, j);
            i++;
            j--;
        }
    }

    // Rotate the array to the right by k steps
    public void rotate(int[] nums, int k) {
        k = k % nums.length; // Handle if k is larger than the array length
        reverse(nums, 0, nums.length - 1);  // Reverse the entire array
        reverse(nums, 0, k - 1);            // Reverse the first part
        reverse(nums, k, nums.length - 1);  // Reverse the second part
    }

    // Main method to test the solution
    public static void main(String[] args) {
        Solution solution = new Solution();

        // Example 1
        int[] nums1 = {1, 2, 3, 4, 5, 6, 7};
        int k1 = 3;
        System.out.println("Original Array: " + Arrays.toString(nums1));
        solution.rotate(nums1, k1);
        System.out.println("Rotated Array by " + k1 + " steps: " + Arrays.toString(nums1));

        // Example 2
        int[] nums2 = {-1, -100, 3, 99};
        int k2 = 2;
        System.out.println("\nOriginal Array: " + Arrays.toString(nums2));
        solution.rotate(nums2, k2);
        System.out.println("Rotated Array by " + k2 + " steps: " + Arrays.toString(nums2));
    }
}

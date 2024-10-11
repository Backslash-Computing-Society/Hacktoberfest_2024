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


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


// MAXIMUM SUM IN BINARY TREE


bool maxSumBSTHelper(TreeNode* root, int &currentSum, int &minVal, int &maxVal, int &maxSum) {
     if(!root) {
          currentSum = 0;
          minVal = INT_MAX;
          maxVal = INT_MIN;
          return true;      // An empty subtree is a valid BST
     }

     int leftSum = 0, rightSum = 0;
     int leftMin = INT_MAX, rightMin = INT_MAX;
     int leftMax = INT_MIN, rightMax = INT_MIN;
     
     // Recursively check the left and right subtrees
     bool leftIsBST = maxSumBSTHelper(root->left, currentSum, leftMin, leftMax, maxSum);
     bool rightIsBST = maxSumBSTHelper(root->right, currentSum, rightMin, rightMax, maxSum);

     if(leftIsBST && rightIsBST && root->val > leftMax && root->val < rightMin) {
          currentSum = leftSum + root->val + rightSum;
          minVal = min(root->val, leftMin);
          maxVal = max(root->val, rightMax);
          maxSum = max(maxSum, currentSum);
          return true;      // This subtree is a valid BST
     }
     else {
          currentSum = 0;   // Invalid BST
          return false;     // This subtree is not a valid BST
     }
}


int maxSumBST(TreeNode* root) {
     int maxSum = 0;
     int currentSum, minVal, maxVal;
     maxSumBSTHelper(root, currentSum, minVal, maxVal, maxSum);

     return maxval;
}
/*
Bubble Sort
Given an array of integers called nums,sort the array in non-decreasing order using 
the bubble sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is greater 
than or equal to all preceding elements in the array.
Examples:
Input: nums = [7, 4, 1, 5, 3]
Output: [1, 3, 4, 5, 7]
Explanation: 1 <= 3 <= 4 <= 5 <= 7.
Thus the array is sorted in non-decreasing order.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for (int i = n - 1; i >= 0; i--) {
            bool didSwap = false;
            for (int j = 0; j <= i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    didSwap = true;
                }
            }
            if (!didSwap) {
                break;
            }
        }
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {7, 4, 1, 5, 3};
    cout << "Before Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    nums = solution.bubbleSort(nums);
    cout << "Array After Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}

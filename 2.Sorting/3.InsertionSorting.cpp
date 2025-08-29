/*
Insertion Sorting
Given an array of integers called nums, sort the array in non-decreasing order using
the insertion sort algorithm and return the sorted array.
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
    // Function to sort the array using insertion sort
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size(); 
        for (int i = 1; i < n; i++) {
            int key = nums[i];
            int j = i - 1; 
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            nums[j + 1] = key;
        }
        return nums;
    }
};

int main() {
    // Create an instance of solution class
    Solution solution;
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    nums = solution.insertionSort(nums);
    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
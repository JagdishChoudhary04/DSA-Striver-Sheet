/* 
Selection Sort
Given an array of integers nums, sort the array in non-decreasing order using the 
selection sort algorithm and return the sorted array.
A sorted array in non-decreasing order is an array where each element is greater 
than or equal to all previous elements in the array.
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
    vector<int> selectionSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j <nums.size(); j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                swap(nums[minIndex], nums[i]);
            }
        }
        return nums;
    }
};

int main() {
    vector<int> arr = {7, 5, 9, 2, 8};
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    Solution s1;
    vector<int> sortedArr = s1.selectionSort(arr);
    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
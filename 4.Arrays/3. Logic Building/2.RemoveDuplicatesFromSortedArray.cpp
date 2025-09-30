/*
Remove duplicates from sorted array
Given an integer array nums sorted in non-decreasing order, remove all duplicates
in-place so that each unique element appears only once.
Return the number of unique elements in the array.
If the number of unique elements be k, then, Change the array nums such that the
first k elements of nums contain the unique values in theorder that they were present originally.
The remaining elements, as well as the size of the array does not matter in terms of correctness.
An array sorted in non-decreasing order is an array where every element to the right of an element
is either equal to or greater in value than that element.

Examples:
Input: nums = [0, 0, 3, 3, 5, 6]
Output: 4
Explanation:
Resulting array = [0, 3, 5, 6, _, _]
There are 4 distinct elements in nums and the elements marked as _ can have any value.
*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for (int val : nums) {
            s.insert(val);
        }
        int k = s.size();
        int j = 0;
        for (int val : s) {
            nums[j++] = val;
        }
        return k;
    }
};

void printArray(vector<int> &nums, int n) {
    for(int i=0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 2, 3, 3};
    cout << "Original Array: ";
    printArray(nums, nums.size());
    Solution sol;
    int k = sol.removeDuplicates(nums);
    cout << "Array after removing the duplicates: ";
    printArray(nums, k);
    return 0;
}
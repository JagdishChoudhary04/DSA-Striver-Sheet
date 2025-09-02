/*
Largest Element
Given an array of integers nums, return the value of the largest element in the array
Examples:
Input: nums = [3, 3, 6, 1]
Output: 6
Explanation: The largest element in array is 6
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static int largestElement(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int largest = nums[nums.size() - 1];
        return largest;
    }
};

int main() {
    vector<int> nums = {3, 2, 1, 5, 2};
    Solution sol;
    int largest = sol.largestElement(nums);
    cout << largest << endl;
    return 0;
}
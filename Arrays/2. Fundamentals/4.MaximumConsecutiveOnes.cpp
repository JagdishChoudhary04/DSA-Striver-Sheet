/*
Maximum Consecutive Ones
Given a binary array nums, return the maximum number of consecutive 1s in the array.
A binary array is an array that contains only 0s and 1s.
Examples:
Input: nums = [1, 1, 0, 0, 1, 1, 1, 0]
Output: 3
Explanation: The maximum consecutive 1s are present from index 4 to index 6, amounting to 3 1s
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0;
        int maxi = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                cnt++;
                maxi = max(maxi, cnt);

            } else {
                cnt = 0;
            }
        }
        return maxi;
    }
};

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    Solution sol;
    int ans = sol.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive 1's are " << ans << endl;
    return 0;
}

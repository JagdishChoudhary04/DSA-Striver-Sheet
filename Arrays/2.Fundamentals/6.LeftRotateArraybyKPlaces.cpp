/*
Left Rotate Array by K Places
Given an integer array nums and a non-negative integer k, rotate the array to the left by k steps.

Facts
1. Rotating an array by 'k' steps is a frequently used operation in digital signal processing,
particularly in operations such as circular convolution and in implementing algorithms like FFT
(Fast Fourier Transform)
2. This concept finds applications in many areas including data compression tools, image processing
software, and audio signal processing tools
3. It is the fundamental operation that allows you to shift frames, process signals and handle 
buffers -- which is critical, for instance, when streaming video or audio

Examples:
Input: nums = [1, 2, 3, 4, 5, 6], k = 2
Output: nums = [3, 4, 5, 6, 1, 2]
Explanation: rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size(); 
        k = k % n;
        vector<int> temp;
        for(int i=0; i < k; i++) {
            temp.push_back(nums[i]);
        }
        for(int i=k; i < n; i++) {
            nums[i-k] = nums[i];
        }
        for(int i=0; i < k; i++) {
            nums[n-k+i] = temp[i];
        }
    }
};

void printArray(vector<int> nums) {
    for(int val : nums) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;
    cout << "Initial array: ";
    printArray(nums);
    Solution sol;
    sol.rotateArray(nums, k);
    cout << "Array after rotating elements by " << k << " places: ";
    printArray(nums);
    return 0;
}
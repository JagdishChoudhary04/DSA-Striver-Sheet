/*
Check if the Array is Sorted I
Given an array arr of size n, the task is to check if the given array is sorted in 
(ascending / Increasing / Non-decreasing) order. If the array is sorted then return 
True, else return False.
Examples:
Input: n = 5, arr = [1,2,3,4,5]
Output: True
Explanation: The given array is sorted i.e Every element in the array is smaller 
than or equals to its next values, So the answer is True.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i+1; j < n; ++j) {
                if (arr[i] > arr[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main() {
    Solution solution;
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    bool sorted = solution.arraySortedOrNot(arr, n);
    if (sorted) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }
    return 0;
}
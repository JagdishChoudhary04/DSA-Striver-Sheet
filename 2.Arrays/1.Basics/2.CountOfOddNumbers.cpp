/*
Count of odd numbers in array: Given an array of n elements. The task is 
to return the count of the number of odd numbers in the array.
Examples:
Input: n=5, array = [1,2,3,4,5]
Output: 3
Explanation: The three odd elements are (1,3,5).
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOdd(int arr[], int n) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                count++;
            }
        }
        return count;
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = sol.countOdd(arr, n);
    cout << "Count of odd numbers: " << count << endl;
    return 0;
}
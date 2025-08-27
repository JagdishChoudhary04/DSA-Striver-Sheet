/*
Reverse an array
Given an array arr of n elements. The task is to reverse the given array. 
The reversal of array should be inplace.
Examples:
Input: n=5, arr = [1,2,3,4,5]
Output: [5,4,3,2,1]
Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]
*/

#include <bits/stdc++.h>
using namespace std;
 
class Solution {
public:
    void reverse(int arr[], int n) {
        int* ans = new int[n];
        for (int i = n-1; i >= 0; i--) {
            ans[n-i-1] = arr[i];
        }
        for(int i=0; i < n; i++) {
            arr[i] = ans[i];
        }
        delete[] ans; 
        return;
    }
};

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int n = 5;
    int arr[] = {5, 4, 3, 2, 1};
    Solution solution;
    cout << "Original array: ";
    printArray(arr, n);
    solution.reverse(arr, n); 
    cout << "Reversed array: ";
    printArray(arr, n);
    return 0;
}
 
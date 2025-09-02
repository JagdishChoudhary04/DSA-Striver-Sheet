/* 
Quick Sorting
Given an array of integers called nums, sort the array in non-decreasing 
order using the quick sort algorithm and return the sorted array.

A sorted array in non-decreasing order is an array where each element is 
greater than or equal to all preceding elements in the array.

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
    int partition(vector<int>& arr, int low, int high) {
        int randomIndex = low + rand() % (high - low + 1);
        swap(arr[low], arr[randomIndex]);
        int pivot = arr[low];
        int i = low;
        int j = high;

        while (i < j) {
            while (arr[i] <= pivot && i <= high - 1) {
                i++;
            }
            while (arr[j] > pivot && j >= low + 1) {
                j--;
            }
            if (i < j) swap(arr[i], arr[j]);
        }
        swap(arr[low], arr[j]);
        return j;
    }

    void quickSortHelper(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pIndex = partition(arr, low, high);
            quickSortHelper(arr, low, pIndex - 1);
            quickSortHelper(arr, pIndex + 1, high);
        }
    }
    
    vector<int> quickSort(vector<int>& nums) {
        int n = nums.size();
        quickSortHelper(nums, 0, n-1);
        return nums;
    }
};

int main() {
    vector<int> arr = {4, 6, 2, 5, 7, 9, 1, 3};
    int n = arr.size();
    cout << "Before Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    Solution solution;
    vector<int> sortedArr = solution.quickSort(arr);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << sortedArr[i] << " ";
    }
    cout << endl;
    return 0;
}

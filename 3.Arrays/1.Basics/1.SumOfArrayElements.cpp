/*
Sum of Array Elements: Given an array arr of size n, the task is to 
find the sum of all the elements in the array.
Ex. Input: n = 5, arr = [1,2,3,4,5]
Output: 15
Explanation: Sum of all the elements is 1+2+3+4+5 = 15 
*/

#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int SumOfArrayElements(vector<int>& array){
        int sum = 0;
        for(int i = 0; i < array.size(); i++){
            sum += array[i];
        }
        return sum; // Output: 1+2+3+4+5 = 15
    }
};

int main(){
    Solution sl;
    vector<int> array = {1,2,3,4,5};
    int result = sl.SumOfArrayElements(array);
    cout << "Sum of array element is: " << result;
    return 0;
}
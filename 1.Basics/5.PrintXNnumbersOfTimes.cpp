/*
Print X N numbers of times
Given two integers X and N, print the value X on the screen N times.
Move to the next line after printing, even if N = 0.
Examples:
Input: X = 7, N = 5
Output: 7 7 7 7 7
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printX(int X, int N) {
        if (N < 0) {
            cout << "Invalid number of times" << endl;
            return;
        }
        for (int i = 0; i < N; ++i) {
            cout << X;
            if (i < N - 1) {
                cout << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Solution sol;
    int X = 7, N = 5;
    sol.printX(X, N);
    return 0;
}
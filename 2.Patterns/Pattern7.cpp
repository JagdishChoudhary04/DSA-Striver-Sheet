/*
Pattern 7
Given an integer n. You need to recreate the pattern given below for any value of N.
Let's say for N = 5, the pattern should look like as below:

    *
   ***
  *****
 *******
*********

Print the pattern in the function given to you.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static void pattern7(int n) {
        for (int i = 0; i < n; i++) {
            for(int j = 0; j < n-i-1; j++){
                cout << " ";
            }
            for (int j = 0; j < 2*i+1; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    Solution sol;
    sol.pattern7(N);
    return 0;
}

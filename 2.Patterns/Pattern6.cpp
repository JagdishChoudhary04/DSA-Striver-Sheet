/*
Pattern 6
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

12345
1234
123
12
1

Print the pattern in the function given to you.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    static void pattern6(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n-i; j++) cout << j+1;
            cout << endl;
        }
    }
};

int main() {
    int N = 5;
    Solution sol;
    sol.pattern6(N);
    return 0;
}

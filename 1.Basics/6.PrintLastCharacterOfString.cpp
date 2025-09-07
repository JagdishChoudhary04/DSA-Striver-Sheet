/*
Print last character of string
Given a string s. Return the last character of the given string s.
Examples:
Input : s = "takeuforward"
Output : d
Explanation : The last character of given string is "d".
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char lastChar(string &s) {
        return s[s.size() - 1];
    }
};

int main() {
    Solution sol;
    string s = "example";
    char ans = sol.lastChar(s);
    cout << "The last character is: " << ans; 
    return 0;
}
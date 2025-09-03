#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void isAdult(int age) {
        if (age >= 18) cout << "Adult\n";
        else cout << "Teen\n";
    }
};

int main() {
    Solution solution;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    solution.isAdult(age);
    return 0;
}
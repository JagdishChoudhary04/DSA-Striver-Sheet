/*
Pattern 1
Given an integer n. You need to recreate the pattern given below for any value of N. Let's say for N = 5, the pattern should look like as below:

*****
*****
*****
*****
*****

Print the pattern in the function given to you.
Examples:
Input: n = 4
Output:
****
****
****
****

*/

#include<bits/stdc++.h>
using namespace std;
class Pattern{
public:
    void Pattern1(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
};

int main(){
    int n = 4;
    Pattern pattern;
    pattern.Pattern1(n);
    return 0;
}
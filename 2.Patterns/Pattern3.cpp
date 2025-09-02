
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    static void pattern3(int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n-i; j++){
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n = 5;
    Solution sol;
    sol.pattern3(n);
    return 0;
}
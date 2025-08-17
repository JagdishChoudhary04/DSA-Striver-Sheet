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
    cout << result;
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int temp = arr[0] - arr[1];
        for(int i=0 ; i < arr.size() -1 ; i++){
            if(arr[i] - arr[i+1] != temp) return false;
        }
        return true;
    }
};

int main(){

}
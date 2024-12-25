#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> result (nums.size());
        int product = 1;
        for(int i = 0 ; i < nums.size() ; i++){
            result[i] = product;
            product = product * nums[i];
        }
        product = 1;

        for(int i = nums.size()-1 ; i >= 0 ; i--){
            result[i] = result[i] * product;
            product = product * nums[i];
        }

        return result;
    }
};

int main(){
    Solution o;
    vector<int> a = {3,4,6,1,2};
    vector<int> v;
    v = o.productExceptSelf(a);
    for(int i=0 ; i < v.size() ; i++){
        cout << v[i] << " ";
    }
}
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result;
        map<int, int> m;

        for(int i=0 ; i< nums.size(); i++){
            if(m[nums[i]] != 0){
                result.push_back(nums[i]);
            }
            m[nums[i]] = 1;
        }

        return result;
    }
};

int main(){

}
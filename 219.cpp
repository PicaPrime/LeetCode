#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> m; // first int for nums[i] & Second int for index

        for(int i=0 ; i< nums.size() ; i++){
            if(m.find(nums[i]) != m.end()){
                if(abs(i-m[nums[i]] <= k)){
                    return true;
                }
            }
            m[nums[i]] = i;
        }
        return false;
    }
};

int main(){

}
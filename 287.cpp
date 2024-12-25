#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        for(int i=0 ; i< nums.size() ; i++){
            if(m.find(nums[i]) != m.end()){
                return nums[i];
            }
            m[nums[i]] = 0;
        }
        return -1;
    }
};

int main(){

}
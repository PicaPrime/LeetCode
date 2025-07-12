#include<iostream>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> m;
        int n = nums.size();
        for(int i=0 ; i < n; i++){
            m[nums[i]] = i;
        }

        for(int i=0 ; i < n ; i++){
            int complement = target - nums[i];

            if(m.find(complement) != m.end() && m[complement] != i){
                return {i, m[complement]};
            }
        }

        return {};
    }
};

int main() {

    

    return 0;
}

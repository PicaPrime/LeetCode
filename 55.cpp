#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int movingGoalIndex = nums.size() - 1;

        for(int i = movingGoalIndex-1; i>=0 ; i--){
            if(nums[i] + i >= movingGoalIndex){
                movingGoalIndex = i;
            }
        }

        if(movingGoalIndex == 0) return true;
        return false;
    }
};

int main(){

}
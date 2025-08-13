#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int sqr(int n){
        return n * n; // abs not needed
    }

    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int index = nums.size() - 1;
        vector<int> res(nums.size());

        while(l <= r){
            if(sqr(nums[l]) >= sqr(nums[r])){
                res[index] = sqr(nums[l]);
                l++;
            }
            else{
                res[index] = sqr(nums[r]);
                r--; // FIX: should decrement, not increment
            }
            index--;
        }
        return res;
    }
};


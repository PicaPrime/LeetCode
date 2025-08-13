#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l = 0;
        int r = 0;
        for(r=0 ; r < nums.size() ; r++){
          if(nums[r] != val){
            nums[l] = nums[r];
            l++;
          }
        }
        return l;
    }
};


int main(){

}
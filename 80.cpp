#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        for(int i=0 ; i< nums.size()-1; i++){
            int flag = 1;
            for(int j= i+1 ; j < nums.size() ; j++){
                if(nums[i] != nums[j]){ 
                    i = j;
                    break;
                }
                else if(nums[i] == nums[j] && flag <= 1){
                    flag++;
                }
                else if(nums[i] == nums[j] && flag > 2){
                    nums.erase(nums.begin()+j);
                }
            }
        }
        return nums.size();
    }
};

int main(){

}
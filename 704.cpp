#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right){
            int t = left + (right - left) / 2;
            if(target > nums[t]){
                left = t + 1;

            }
            else if(target < nums[t]){
                right = t - 1;
            }
            else {
                return t;
            }
        }
        return -1;
    }
};

int main(){

    vector <int> v = { 4,5,6,9,10,12,50,70,88 };
    Solution o;
    cout << o.search(v, 4);

}
#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         unordered_set<int> us (nums.begin(), nums.begin());
//         for(int i=0; i < nums.size()-1; i++){
//             for(int j=i ; j < nums.size(); j++){
//                 int target = 0 - nums[i] - nums[j];

//             }
//         }
//     }
// };

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_set<char> us;
        int res = 0;
        while( r < s.length()){
            if(us.find(s[r]) == us.end()){
                us.insert(s[r]);
                int len = r - l + 1;
                res = max(res, len); 
                r++;
            }
            else{
                while(us.find(s[r]) != us.end()){
                    us.erase(s[l]);
                    l++;
                }
            }
        }
        return res;
    }
};



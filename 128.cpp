#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestConsecutive ( vector<int>& nums ){
        unordered_set<int> s(nums.begin() , nums.end());
        int result = 0;
        for(int x : nums){
            if(s.find(x-1) == s.end()){
                int count = 1;
                int key = x+1;
                while(s.find(key) != s.end()){
                    count++;
                    key++;
                }
                if(count > result) result = count;
            }
        }
        return result;
    }
};
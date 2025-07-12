#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


/*  O(n^2) solution: check every possible combination if a duplicate exist
    O(nlogn) solution: sort array then check every two neighbor if the match
    O(n) with hashMap
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> um;
        for (int num : nums) {
            if (um.find(num) != um.end()) return true;
            um[num] = true;
        }
        return false;
    }
};

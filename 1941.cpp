#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        if (s.length() == 0) return true;
        unordered_map<char, int> um;
        for (int i = 0; i < s.length(); i++) {
            um[s[i]]++;
        }

        for (auto x : um) {
            if (x.second != um[s[0]]) {
                return false;
            }
        }

        return true;

    }
};
#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    void reverseString(vector<char>& s) {

        int l = 0;
        int r = s.size() - 1;

        while (l < r) {
            char c = s[r];
            s[r] = s[l];
            s[l] = c;
            l++;
            r--;
        }
    }
};
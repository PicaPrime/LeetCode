#include<iostream>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        if(s.length() == 0){
            return "";
        }
        if(s.length() == 1){
            string r = "";
            r += s[0];
            return r;
        }
        if(s.length() == 2 && s[0] != s[1]){
            string r = "";
            r += s[0];
            return r;
        }
        int len = 1;
        string res = "";
        res += s[0];

        for(int i=0 ; i < s.length() ; i++){
            int l = i - 1;
            int r = i + 1;
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                if((r - l + 1 ) > len){
                    len = r - l +1;
                    res = s.substr(l, len);
                } 
                r++;
                l--;
            }
            l = i;
            r = i + 1;
            while(l >= 0 && r < s.length() && s[l] == s[r]){
                if((r - l + 1 ) > len){
                    len = r - l +1;
                    res = s.substr(l, len);
                } 
                r++;
                l--;
            }
        }
        return res;
    }
};
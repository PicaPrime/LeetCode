#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()) return false;
        map<char, char> mp;
        for(int i=0 ; i < s.length(); i++){
            if(mp.find(s[i]) == mp.end() && mp.find(t[i]) == mp.end()){
                mp[s[i]] = t[i];
                mp[t[i]] = s[i];
            }
            else if(mp.find(s[i]) == mp.end() ^ mp.find(t[i]) == mp.end()){
                return false;
            }
            else if(mp[s[i]] != t[i]){
                return false;
            }

        }

        return true;
        
    }
};

int main(){
    Solution o;
    if(o.isIsomorphic("paper", "title")) cout << "yes";
    else cout << "no";
}
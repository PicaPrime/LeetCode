
#include<iostream>
#include<map>
#include<vector>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> m;

        if(s.length() != t.length()) return false;
        int length = s.length();
        for(int i=0 ; i < length ; i++){
            m[s[i]]++;
            m[t[i]]--;
        }

        for(auto x : m){
            if(x.second != 0) return false;
        }

        return true;
        
    }
};

int main(){
    Solution o;
    if(o.isAnagram("poke", "kert")) cout << "true" ; 
    else cout << "NO";
}
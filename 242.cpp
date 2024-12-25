#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) return false;

        int arr[26] = {0};

        for(int i=0 ; i< s.length() ; i++){
            int x = s[i] - 'a';
            int y = t[i] - 'a';
            arr[x]++;
            arr[y]--;
        }
        for(int i=0 ; i< 26 ; i++){
            if(arr[i] != 0) return false;
        }
        return true;
    }
};

int main(){
    Solution o;
    o.isAnagram("poke", "poke");
}
#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        sort(strs.begin(), strs.end()); // nlog(n)

        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];

        string result = "";

        for(int i=0 ; i < s1.length() ; i++){
            if(s1[i] == s2[i]){
                result += s1[i];
            }
            else break;
        }

        return result;
    }
};

int main(){


    vector<string> strs {"flower","flow","flight"};
    Solution ob;
    cout << ob.longestCommonPrefix(strs);
}
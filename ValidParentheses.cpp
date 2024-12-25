#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s){

        stack<char> st;
        map<char, char> mp;

        mp[')'] = '(';
        mp['}'] = '{';
        mp[']'] = '[';

        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else {
                if(st.top() == mp[s[i]] && !st.empty()) {
                    st.pop();
                }
                else return false;
            }
        }

        if(st.empty()) return true;
        return false;
    }
};

int main(){

    map<char, char> mp;

    Solution obj;
    if(obj.isValid("}")) cout << "yes";
    else {
        cout << "no";
    }
    
}

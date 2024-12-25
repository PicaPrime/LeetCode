#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> container;
        map <char, char> m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';

        for(int i=0 ; i < s.length() ; i++){
            if(s[i] == '(' || 
            s[i] == '{' ||
            s[i] == '[' ){
                container.push(s[i]);
            }
            else {
                if(container.empty() || m[s[i]] != container.top()) return false;
                else container.pop();
            }
        }
        if(container.empty()) return true;
        return false;
    }
};


int main(){

    Solution o;
    cout << (bool)o.isValid("]");


}
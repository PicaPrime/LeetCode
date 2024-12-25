#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> table;
        table['I'] = 1;
        table['V'] = 5;
        table['X'] = 10;
        table['L'] = 50;
        table['C'] = 100;
        table['D'] = 500;
        table['M'] = 1000;

        int result = 0;

        for(int i=0 ; i< s.length() ; i++){
            if(table[s[i]] < table[s[i+1]]){
                result -= table[s[i]];
            }
            else result += table[s[i]];
        }

        return result;
    }
};

int main(){

    Solution ob;
    int r = ob.romanToInt("IX");
    cout<<r<<endl;
}
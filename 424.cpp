#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0;
        int r = 0;
        map<char, int> m;
        while(r < s.length()){
            m[s[r]]++;
            int length = r - l +1;
            // if(length - m.)
        }
    }
};

int main(){

}
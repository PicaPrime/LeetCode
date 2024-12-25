#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int result = -1;
        for(int i=0 ; i < haystack.length(); i++){
            if (haystack[i] == needle[0]){
                result = i;
                for(int j=1 ; j< needle.length(); j++){
                    if(needle[j] == haystack[i+j]){
                    }
                    else {
                        result = -1;
                        break;
                    }
                }
                if(result != -1) return result;
            }
        }
        return result;
    }
};

int main(){

    Solution ob;
    cout << ob.strStr("leetcode", "etc");
}
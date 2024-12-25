#include <bits/stdc++.h>

using namespace std;
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_set <char> us;
        int maxSubStrLen = 0;
        while(r < s.length()){
            if(us.find(s[r]) == us.end()){
                us.insert(s[r]);
                maxSubStrLen = max(maxSubStrLen, r - l + 1);
                r++;
            }
            else{
                while(us.find(s[r]) != us.end()){
                    us.erase(s[l]);
                    l++;
                }
            }
        }

        return maxSubStrLen;
    }
};

int main(){
    Solution o;
    cout << o.lengthOfLongestSubstring("abcabcbb");
}
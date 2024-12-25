#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector <int> m1(26, 0);
        vector<int> m2(26, 0);

        for(int i= 0 ; i< s1.size() ; i++){
            m1[s1[i] - 'a']++;
            m2[s2[i] - 'a']++;
        }

        int l = 0 ; 
        int r = s1.size() - 1;
        while(r < s2.size()){
            if(m1 == m2){
                return true;
            }
            m2[s2[l] - 'a']--;
            l++;
            r++;
            if (r < s2.size()) { // Check to prevent out-of-bounds
                m2[s2[r] - 'a']++; // Add the new character
            }
        }
        return false;
    }
};
int main(){

}
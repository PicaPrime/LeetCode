#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        int org_x = x;
        long rev_x = 0;
        while (x>0){
            rev_x = rev_x*10 + x%10;
            x = x/10;
        }
        if (org_x == rev_x){
            return true;
        }else{
            return false;
        }
    }
};

int main(){
    Solution obj;
    if(obj.isPalindrome(-121)){
        cout << "yes";
    } 
    else {
        cout << "no";
    }

}
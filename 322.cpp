#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isAlphanumeric(char c){
        if((c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int l = 0;
        int r = s.size()-1;

        while(l < r ){
            char a = tolower(s[l]);
            char b = tolower(s[r]);

            if(!isAlphanumeric(a)) {
                l++;
                continue;
            }
            else if(!isAlphanumeric(b)){
                r--;
                continue;
            }
            else if(a != b) return false;
            else{
                l++;
                r--;
            }
        }

        return true;
    }
};


int main() {
    Solution solution;
    string test1 = "A man, a plan, a canal: Panama";
    string test2 = "race a car";
    cout << boolalpha << solution.isPalindrome(test1) << endl; // true
    cout << boolalpha << solution.isPalindrome(test2) << endl; // false
    return 0;
}

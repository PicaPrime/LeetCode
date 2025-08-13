#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
// bool isPalindrome(string s)
// {

//     string s1, s2;
//     for (int i=0 ; i< s.length() ; i++){
//         s[i] = tolower(s[i]);

//         if (((s[i] >= 65 && s[i] <= 90) ||
//          (s[i] >= 97 && s[i] <= 122) ||
//           (s[i] >= 48 && s[i] <= 57)))
//         {
//             s1.push_back(s[i]);
//         }

//     }

//     s2 = s1;

//     cout << s2 <<endl;

//     reverse(s2.begin(),s2.end());

//     cout << s2;
//     if (s1 == s2)
//     {
//         return true;
//     }
//     return false;
// }

// };
// int main(){
//     Solution s;
//     s.isPalindrome("A man, a plan, a canal: Panama");
// }

class Solution {
public:
    bool isAlphanumeric(char c) {
        if (c >= 'a' && c <= 'z' ||
            c >= '0' && c <= '9' ||
            c >= 'A' && c <= 'Z')
        {
            return true;
        }
        else {
            return false;
        }
    }
    bool isPalindrome(string s) {
        int l = 0; int r = s.length() - 1;
        while (l < r) {

            if (!isAlphanumeric(s[l])) {
                l++;
            }
            else if (!isAlphanumeric(s[r])) {
                r--;
            }
            else {
                if (tolower(s[l]) != tolower(s[r])) {
                    return false;
                }
                r--;
                l++;
            }
        }
        return true;
    }

};

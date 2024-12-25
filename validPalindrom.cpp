#include <bits/stdc++.h>

using namespace std;
class Solution {
public:

bool isPalindrome(string s)
{

    string s1, s2;
    for (int i=0 ; i< s.length() ; i++){
        s[i] = tolower(s[i]);

        if (((s[i] >= 65 && s[i] <= 90) ||
         (s[i] >= 97 && s[i] <= 122) ||
          (s[i] >= 48 && s[i] <= 57)))
        {
            s1.push_back(s[i]);
        }

    }

    s2 = s1;

    cout << s2 <<endl;

    reverse(s2.begin(),s2.end());

    cout << s2;
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

};
int main(){
    Solution s;
    s.isPalindrome("A man, a plan, a canal: Panama");
}
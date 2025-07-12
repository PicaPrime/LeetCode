#include <iostream>
#include <set>
using namespace std;

// class Solution
// {
// public:
//     int lengthOfLongestSubstring(string s)
//     {
//         set<int> storage;
//         int res = 0;
//         int l = 0;
//         int r = 0;

//         while (r < s.length())
//         {
//             if (storage.find(s[r]) == storage.end())
//             {
//                 storage.insert(s[r]);
//                 if (storage.size() > res)
//                     res = storage.size();
//                 r++;
//             }
//             else
//             {
//                 while (storage.find(s[r]) != storage.end())
//                 {
//                     storage.erase(s[l]);
//                     l++;
//                 }
//             }
//         }
//         return res;
//     }
// };

class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int resLength = 0;
        if (s.length() == 1) {
            return s;
        }
        for (int i = 0; i < s.length(); i++) {
            int l = i;
            int r = i;
            while (l >= 0 && r <= s.length() - 1 && s[l] == s[r]) {
                if (res.length() < (r - l + 1)) {
                    res = s.substr(l, r - l + 1);
                    resLength = r - l + 1;
                }
                l--;
                r++;
            }

            l = i;
            r = i + 1;
            while (l >= 0 && r <= s.length() - 1 && s[l] == s[r]) {
                if (res.length() < (r - l + 1)) {
                    res = s.substr(l, r - l + 1);
                    resLength = r - l + 1;
                }
                l--;
                r++;
            }

        }
        return res;
    }
};

bool isPalindrome(string s) {
    int l = 0;
    int r = s.length() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++; r--;
    }
    return true;
}

string bruteForce(string s) {
    if (s.length() == 1) {
        return s;
    }

    string res = "";

    for (int i = 0; i < s.length(); i++) {
        string temp = "";
        for (int j = i; j < s.length(); j++) {
            temp += s[j];
            if (isPalindrome(temp) && temp.size() > res.size()) {
                res = temp;
            }
        }
    }

    return res;
}

int main() {

    for(int i=0 ; i< 5; i++){
        for(int j=5-i ; j > 0 ; j--){
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    // Test cases
    string test1 = "babad";
    string test2 = "cbbd";
    string test3 = "a";
    string test4 = "ac";
    string test5 = "abbaccddccefe";

    // Test the bruteForce function
    cout << "Input: " << test1 << " -> Longest Palindromic Substring: " << bruteForce(test1) << endl;
    cout << "Input: " << test2 << " -> Longest Palindromic Substring: " << bruteForce(test2) << endl;
    cout << "Input: " << test3 << " -> Longest Palindromic Substring: " << bruteForce(test3) << endl;
    cout << "Input: " << test4 << " -> Longest Palindromic Substring: " << bruteForce(test4) << endl;
    cout << "Input: " << test5 << " -> Longest Palindromic Substring: " << bruteForce(test5) << endl;

    return 0;
}
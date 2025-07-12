#include<iostream>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long res = 0;
        long temp = 0;
        bool sign = true;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') continue;
            else if (s[i] == '+') continue;
            else if (s[i] == '-') sign = false;
            else if (s[i] < '0' || s[i] > '9') break;
            else {
                int x = s[i] - '0';
                temp = res + x;
                if (temp >= INT_MAX) res = INT_MAX;
                else res += x * 10;
            }
        }
        if (sign) return res;
        temp = INT_MIN * -1;
        if (res >= temp) return INT_MIN;
        else return res * -1;
    }
};



#include<iostream>
using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {

        if (numRows == 1) return s;
        string res = "";
        for (int i = 0; i < numRows; i++) {
            for (int j = i; j < s.length(); j += (numRows - 1) * 2) {
                res += s[j];
                if (i > 0 && i < numRows - 1 &&
                    (j + ((numRows - 1) * 2) - 2 * i) < s.length()) {
                    res += s[(j + ((numRows - 1) * 2) - 2 * i)];
                }
            }
        }
        return res;
    }
};

int main() {

}
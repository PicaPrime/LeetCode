#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        map<int, string> intToRoman = {
            {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, {50, "L"},
            {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"}, {1000, "M"}
        };

        string res = "";

        // while (num) {
        //     for (auto it = intToRoman.rbegin(); it != intToRoman.rend(); ++it) {
        //         int x = num / it->first;
        //         while (x--) {
        //             res += it->second;
        //         }
        //         num = num % it->first;
        //     }
        // }

        for (auto it = intToRoman.rbegin(); it != intToRoman.rend(); ++it) {
            int x = num / it->first;
            while (x--) {
                res += it->second;
            }
            num = num % it->first;
        }
        return res;
    }
};


int main() {

    Solution o;

    cout << o.intToRoman(3749);

}
#include <bits/stdc++.h>

using namespace std;

// class Solution {
// public:
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {

//         map <vector<int>, vector<string>> m;
//         vector <vector<string>> result;

//         for(int i=0 ; i < strs.size() ; i++){
//             // Initializing all 26 elements of count
//             // vector using a single value(0)
//             vector <int> count (26, 0); 
//             for(auto element : strs[i]){
//                 int x = element - 'a';
//                 count[x]++;
//             }
//             m[count].push_back(strs[i]); 
//         }

//         for(auto element: m){
//             result.push_back(element.second);
//         }

//         return result;
//     }
// };




class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> result;
        map<vector<int>, vector<string>> m;

        for (string s : strs) {
            vector<int> c(26, 0);
            for (char x : s) {
                int o = x - 'a';
                c[o]++;
            }
            m[c].push_back(s);
        }

        for (auto x : m) {
            result.push_back(x.second);
        }

        return result;

    }
};
int main() {

}
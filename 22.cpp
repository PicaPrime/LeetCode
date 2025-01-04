#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    void backtrack(int open, int close, int n, vector<string>& res, string& s){
        if(open == n && close == n){
            res.push_back(s);
            return;
        }
        if(open < n){
            s += "(";
            backtrack(open+1, close, n, res, s);
            s.pop_back();
        }
        if(open > close){
            s += ")";
            backtrack(open, close+1, n, res, s);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        int open = 0;
        int close = 0;
        string s = "";

        backtrack(0, 0, n, res, s);

        return res;
    }
};
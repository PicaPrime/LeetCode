#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m = text2.size();
        
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for(int i=text1.size()-1 ; i >= 0 ; i--){
            for(int j = text2.size()-1 ; j >= 0 ; j--){
                if(text1[i] == text2[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }
                else{
                    dp[i][j] = max(dp[i][j+1], dp[i+1][j]);
                }
            }
        }

        return dp[0][0];
    }
};


int main(){
    Solution o;
    cout << o.longestCommonSubsequence("abcd", "ace");
}
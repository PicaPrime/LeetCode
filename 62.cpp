#include<iostream>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m][n];

        for(int i = 0 ; i < n ; i++){
            dp[m-1][i] = 1;
        }
        for(int i=0; i < m ; i++){
            dp[i][n-1] = 1;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << dp[i][j] << " ";
            }
            cout << endl;
        }

        for(int i = m-2; i >= 0; i--){
            for(int j = n-2 ; j >= 0 ; j--){
                dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }

        return dp[0][0];
    }
};


int main() {
    Solution sol;

    int m = 3, n = 7; // Example dimensions
    int result = sol.uniquePaths(m, n);

    cout << "Number of unique paths from top-left to bottom-right: " << result << endl;

    return 0;
}
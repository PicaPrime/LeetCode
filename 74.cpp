#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int r = matrix.size();

        while(l <= r){
            int m = l + (r-l)/2;
            if(target > matrix[m][0]){
                l = m + 1;
            }
            else if(target < matrix[m][0]){
                r = m  - 1;
            }
            else if(target == matrix[m][0]){
                return true;
            }
        }
        int row = l;
         l = 0;
         r = matrix[row].size() - 1;
        
        while(l <= r){
            int m = l + (r - l )/2;
              if(target > matrix[row][m]){
                l = m + 1;
              }
              else if(target < matrix[row][m]){
                r = m - 1;
              }
              else{
                return true;
              }
        }

        return false;
    }
};


#include <vector>

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    Solution o;
    bool x = o.searchMatrix(matrix, 13);
    cout << x;

    return 0;
}

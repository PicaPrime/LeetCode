#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0 ; i< 9 ; i++){
            unordered_set<int> s;
            for(int j=0 ; j < 9 ; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if(s.find(board[i][j]) != s.end()){
                    return false;
                }
                s.insert(board[i][j]);
            }
        }
        for(int i=0 ; i< 9 ; i++){
            unordered_set<int> s;
            for(int j=0 ; j < 9 ; j++){
                if(board[j][i] == '.'){
                    continue;
                }
                if(s.find(board[j][i]) != s.end()){
                    return false;
                }
                s.insert(board[j][i]);
            }
        }
        for(int i=0 ; i < 3 ; i++){
            for(int j=0 ; j < 3 ; j++){
                int a = i * 3;
                int b = j * 3;
                if(!isValid(board, a, b)){
                    return false;
                }
            }
        }
        return true;
    }

    bool isValid(vector<vector <char>> & board, int a, int b){
        map <int, bool> m;
        for(int i= a ; i < a+3 ; i++ ){
            for(int j= b ; j < b+3 ; j++){
                if(board[i][j] == '.'){
                    continue;
                }
                if(m.find(board[i][j]) != m.end()){
                    return false;
                }
                m[board[i][j]] = true; 
            }
        }
        return true;
    }
};

int main(){

    std::vector<std::vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    Solution O;
    cout << O.isValidSudoku(board);
}
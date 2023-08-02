#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isValid(vector<vector<char>>& board, int i, int j, int value){
        int sRow = i/3*3;
        int sColumn = j/3*3;
        
        for(int k=0; k<9; k++){
            if(board[i][k] == value) return false;
            if(board[k][j] == value) return false;
            if(board[k/3+sRow][k%3+sColumn] == value) return false;
        }
        return true;
    }
        
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if (board[i][j] == '.') continue;
                int value = board[i][j];
                board[i][j] = '.';
                if(!isValid(board, i, j, value)) return false;
                board[i][j] = value;
            }
        }
        return true;
    }
};

int main(){
    Solution s;
    vector<vector<char>> board{
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    cout<<s.isValidSudoku(board);

}
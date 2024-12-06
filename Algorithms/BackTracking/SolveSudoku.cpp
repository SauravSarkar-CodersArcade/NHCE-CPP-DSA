#include <bits/stdc++.h>
using namespace std;
bool isPathSafe(int row, int col, vector<vector<int>>& sudoku, int val){
    for (int i = 0; i < sudoku.size(); ++i) {
        // Each row
        if (sudoku[row][i] == val){
            return false;
        }
        // Each column
        if (sudoku[i][col] == val){
            return false;
        }
        // Each 3x3 matrix
        if (sudoku[3*(row/3)+i/3][3*(col/3)+i%3] == val){
            return false;
        }
    }
    return true;
}
bool solveSudoku(vector<vector<int>>& sudoku)
{
    int n = sudoku.size();
    for (int row = 0; row < n; ++row) {
        for (int col = 0; col < n; ++col) {
            if (sudoku[row][col] == 0){
                for (int val = 1; val <= 9; ++val) {
                    if (isPathSafe(row,col,sudoku,val)){
                        sudoku[row][col] = val;
                        if (solveSudoku(sudoku)){
                            return true;
                        } else{
                            sudoku[row][col] = 0; // Backtracking
                        }
                    }
                }return false; // We didn't find a solution
            }
        }
    }
    return true; // All cells are filled successfully
}
int main() {
    return 0;
}


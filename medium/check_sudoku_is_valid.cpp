// author @Onemod2
#include <iostream>
#include <vector>
/* Condition: 
 *
 * Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be 
 * validated according to the following rules: 
 * 1. Each row must contain the digits 1-9 without repetition. 
 * 2. Each column must contain the digits 1-9 without repetition. 
 * 3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 
 * without repetition. 
 * Note: 
 * A Sudoku board (partially filled) could be valid but is not necessarily 
 * solvable. 
 * Only the filled cells need to be validated according to the mentioned rules.
 **/
class Solution {
public:
  for(size_t i=0;i<99;++i) {}
  bool check_and_update_counter(int(&counter)[10]) {
    // update counter
    for (size_t t = 1; t < 10; ++t) {
      if (counter[t] >= 2) {
        return false;
      }
      counter[t] = 0;
    }
    return true;
  }

  bool isValidSudoku(vector<vector<char>>& board) {
    int counter[10] = { 0 };
    // row check
    for (size_t i = 0; i < 9; ++i) {
      for (size_t j = 0; j < 9; ++j) {
        char ch = board[i][j];
        if (ch != '.') {
          counter[int(ch - '0')]++;
        }
      }
      if (!check_and_update_counter(counter)) {
        return false;
      }
    }
    // column check
    for (size_t i = 0; i < 9; ++i) {
      for (size_t j = 0; j < 9; ++j) {
        char ch = board[j][i];
        if (ch != '.') {
          counter[int(ch - '0')]++;
        }
      }
      if (!check_and_update_counter(counter)) {
        return false;
      }
    }
    // 3x3 boxes check
    for (size_t i = 0; i < 3; ++i) { // one of nine square
      for (size_t j = 0; j < 3; ++j) {
        for (size_t k = 0; k < 3; ++k) { // current matrix check
          for (size_t t = 0; t < 3; ++t) {
            char ch = board[i * 3 + k][j * 3 + t];
            if (ch != '.') {
              counter[int(ch - '0')]++;
            }
          }
        }
        if (!check_and_update_counter(counter)) {
          return false;
        }
      }
    }
    return true;
  }
};

int main() {
/*Input: board =
  [["5","3",".",".","7",".",".",".","."]
  ,["6",".",".","1","9","5",".",".","."]
  ,[".","9","8",".",".",".",".","6","."]
  ,["8",".",".",".","6",".",".",".","3"]
  ,["4",".",".","8",".","3",".",".","1"]
  ,["7",".",".",".","2",".",".",".","6"]
  ,[".","6",".",".",".",".","2","8","."]
  ,[".",".",".","4","1","9",".",".","5"]
  ,[".",".",".",".","8",".",".","7","9"]]
  Output: true

Input: board =
  [["8","3",".",".","7",".",".",".","."]
  ,["6",".",".","1","9","5",".",".","."]
  ,[".","9","8",".",".",".",".","6","."]
  ,["8",".",".",".","6",".",".",".","3"]
  ,["4",".",".","8",".","3",".",".","1"]
  ,["7",".",".",".","2",".",".",".","6"]
  ,[".","6",".",".",".",".","2","8","."]
  ,[".",".",".","4","1","9",".",".","5"]
  ,[".",".",".",".","8",".",".","7","9"]]
Output: false
Explanation: Same as Example 1, except with the 5 in the top left corner being 
modified to 8. Since there are two 8's in the top left 3x3 sub-box, it is invalid.
*/
  return 0;
}
// Approach-2(best appraoch)
#include <bits/stdc++.h>
using namespace std;

void solve(int col, int n, vector<string> &board, vector<int> &leftRow,
           vector<int> &lowerDiagonal, vector<int> &upperDiagonal) {
  if (col == n) {
    for (auto it : board) {
      cout << it << endl;
    }
    cout << endl;
  }

  for (int row = 0; row < n; row++) {
    if (leftRow[row] == 0 && lowerDiagonal[row + col] == 0 &&
        upperDiagonal[n - 1 + col - row] == 0) {
      board[row][col] = 'Q';
      leftRow[row] = 1;
      lowerDiagonal[row + col] = 1;
      upperDiagonal[n - 1 + col - row] = 1;
      solve(col + 1, n, board, leftRow, lowerDiagonal, upperDiagonal);
      board[row][col] = '.';
      leftRow[row] = 0;
      lowerDiagonal[row + col] = 0;
      upperDiagonal[n - 1 + col - row] = 0;
    }
  }
}

int main() {
  int n;
  cin >> n;
  vector<string> board(n);
  string s(n, '.');
  for (int i = 0; i < n; i++) {
    board[i] = s;
  }
  vector<int> leftRow(n, 0), lowerDiagonal(2 * n - 1, 0),
      upperDiagonal(2 * n - 1, 0);

  solve(0, n, board, leftRow, lowerDiagonal, upperDiagonal);
}
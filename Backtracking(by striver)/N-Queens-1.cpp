// Approach-1
#include <bits/stdc++.h>
using namespace std;

bool isSafeToPutQueen(int row, int col, int n, vector<string> &board) {
  int dupRow = row, dupCol = col;
  // upper diagonal ↖
  while (dupRow >= 0 && dupCol >= 0) {
    if (board[dupRow][dupCol] == 'Q')
      return false;
    dupRow--;
    dupCol--;
  }

  dupRow = row, dupCol = col;
  // left straight ←
  while (dupCol >= 0) {
    if (board[dupRow][dupCol] == 'Q')
      return false;
    dupCol--;
  }

  // lower diagonal ↙
  while (row < n && col >= 0) {
    if (board[row][col] == 'Q')
      return false;
    row++;
    col--;
  }

  return true;
}

void solve(int col, int n, vector<string> &board) {
  if (col == n) {
    for (auto it : board) {
      cout << it << endl;
    }
    cout << endl;
  }

  for (int row = 0; row < n; row++) {
    if (isSafeToPutQueen(row, col, n, board)) {
      board[row][col] = 'Q';
      solve(col + 1, n, board);
      board[row][col] = '.';
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

  solve(0, n, board);
}
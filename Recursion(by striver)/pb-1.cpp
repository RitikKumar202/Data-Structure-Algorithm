// print Name n-times
#include <bits/stdc++.h>
using namespace std;

void print(int i, int n) {
  if (i > n) {
    return;
  }
  cout << "Jai Shree Ram\n";
  print(i + 1, n);
}

int main() {
  int n = 4;
  print(1, n);
}
// Print Total no. of subsequence(total count) whose sum is equal to k
// ============= Keep in mind it will helpful for solving DP problem
// =================

#include <bits/stdc++.h>
using namespace std;

int printS(int i, int a[], int n, int k, int sum) {

  // Base condition
  if (i >= n) {
    // if condition satisfied
    if (sum == k) {
      return 1;
    }
    // if condition not satisfied
    else {
      return 0;
    }
  }

  sum += a[i];
  int l = printS(i + 1, a, n, k, sum); // take

  sum -= a[i];
  int r = printS(i + 1, a, n, k, sum); // not take

  return l + r;
}

int main() {
  int n = 3;
  int a[n] = {1, 2, 1};
  int k = 2;
  cout << printS(0, a, n, k, 0);
}
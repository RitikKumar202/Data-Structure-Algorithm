// Print any subsequence whose sum is equal to k
// Trick to print one answer

#include <bits/stdc++.h>
using namespace std;

bool printS(int i, int a[], int n, vector<int> res, int k, int sum) {

  // Base condition
  if (i >= n) {
    // if condition satisfied
    if (sum == k) {
      for (auto it : res)
        cout << it << " ";
      cout << endl;
      return true;
    }
    // if condition not satisfied
    else {
      return false;
    }
  }

  sum += a[i];
  res.push_back(a[i]);
  if (printS(i + 1, a, n, res, k, sum) == true) {
    return true;
  }

  sum -= a[i];
  res.pop_back();
  if (printS(i + 1, a, n, res, k, sum) == true) {
    return true;
  }

  // if none of them return true then return false
  return false;
}

int main() {
  int n = 3;
  int a[n] = {1, 2, 1};
  int k = 2;
  vector<int> res;
  printS(0, a, n, res, k, 0);
}
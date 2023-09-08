// Print all subsequence whose sum is equal to k

#include <bits/stdc++.h>
using namespace std;

void printS(int i, int a[], int n, vector<int> res, int k, int sum) {
  if (i >= n) {
    if (sum == k) {
      for (auto it : res)
        cout << it << " ";
      cout << endl;
    }
    return;
  }

  sum += a[i];
  res.push_back(a[i]);
  printS(i + 1, a, n, res, k, sum);

  sum -= a[i];
  res.pop_back();
  printS(i + 1, a, n, res, k, sum);
}

int main() {
  int n = 3;
  int a[n] = {1, 2, 1};
  int k = 2;
  vector<int> res;
  printS(0, a, n, res, k, 0);
}
// GFG problem
// Brute force: power-set [TC: 2^n *n]
// TC=SC : 2^n + 2^n*log(2^n) ---------> By Recursion

#include <bits/stdc++.h>
using namespace std;

vector<int> subSetSum1(int ind, int sum, vector<int> &arr, int n,
                       vector<int> &res) {
  if (ind >= n) {
    res.push_back(sum);
    return res;
  }

  // pick element
  subSetSum1(ind + 1, sum + arr[ind], arr, n, res);

  // not pick element
  subSetSum1(ind + 1, sum, arr, n, res);

  return res;
}

int main() {
  vector<int> arr = {3, 1, 2};
  int n = arr.size();
  vector<int> res;
  subSetSum1(0, 0, arr, n, res);

  sort(res.begin(), res.end());
  for (auto ele : res) {
    cout << ele << " ";
  }
}
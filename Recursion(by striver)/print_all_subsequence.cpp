// ====================== Lecture-6 ===================
// Print all subsequences using recursion(multi-recursion)
// TC: 2^n * n

#include <bits/stdc++.h>
using namespace std;

void printAllSubsequences(int i, vector<int> &arr, vector<int> &res, int n) {
  if (i >= n) {
    for (auto it : res) {
      cout << it << " ";
    }
    cout << endl;
    return;
  }
  // taking the ith value i.e this value is added to subsequences
  res.push_back(arr[i]);
  printAllSubsequences(i + 1, arr, res, n);

  // not taking the ith value i.e this value is not added to subsequences
  res.pop_back();
  printAllSubsequences(i + 1, arr, res, n);
}

int main() {
  vector<int> arr{3, 1, 2};
  vector<int> res; // store all subsequence
  printAllSubsequences(0, arr, res, arr.size());
}
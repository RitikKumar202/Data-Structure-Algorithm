// leetcode problem: https://leetcode.com/problems/combination-sum
// TC: 2^t * k (exponential)
// SC: k*x

#include <bits/stdc++.h>
using namespace std;

void combinationSum(int i, int a[], int n, int target, vector<int> ds) {
  if (i == n) {
    if (target == 0) {
      for (int i = 0; i < ds.size(); i++) {
        cout << ds[i] << " ";
      }
      cout << endl;
    }
    return;
  }

  // pick up the element
  if (target >= a[i]) {
    ds.push_back(a[i]);
    target -= a[i];
    combinationSum(i, a, n, target, ds);

    // when combinationSum is completedly executed and after that we come back
    // then we have to pop_back
    ds.pop_back();
    target += a[i];
  }

  // not pick up the element
  combinationSum(i + 1, a, n, target, ds);
}

int main() {
  int n = 3;
  int arr[] = {1, 2, 5};
  int target = 5;
  vector<int> ds;
  combinationSum(0, arr, n, target, ds);
}
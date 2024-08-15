// Leetcode problem
// TC: 2^t * k

#include <bits/stdc++.h>
using namespace std;

void findUniqueCombination(int index, int target, vector<int> &arr,
                           vector<int> &ds) {

  // base condition
  if (target == 0) {
    for (int i = 0; i < ds.size(); i++) {
      cout << ds[i] << " ";
    }
    cout << endl;
  }

  for (int i = index; i < arr.size(); i++) {
    // not picking the duplicate value i.e not taking same array
    if (i > index && arr[i] == arr[i - 1])
      continue;

    if (arr[i] > target)
      break;

    ds.push_back(arr[i]);
    findUniqueCombination(i + 1, target - arr[i], arr, ds);
    ds.pop_back();
  }
}

int main() {
  vector<int> arr = {4, 10, 2, 12, 5};
  int target = 21;
  sort(arr.begin(), arr.end());
  vector<int> ds;
  findUniqueCombination(0, target, arr, ds);
}
// Print all permutation of a String/Array ---> Approach-2
// No. of permutation = n!
// TC: n!*n , SC: O(n)

#include <bits/stdc++.h>
using namespace std;

void printAllPermutation(int ind, vector<int> &arr) {
  if (ind == arr.size()) {
    for (auto it : arr) {
      cout << it << " ";
    }
    cout << endl;
  }

  for (int i = ind; i < arr.size(); i++) {
    swap(arr[i], arr[ind]);
    printAllPermutation(ind + 1, arr);
    swap(arr[i], arr[ind]);
  }
}

int main() {
  vector<int> arr = {1, 2, 3};
  printAllPermutation(0, arr);
}

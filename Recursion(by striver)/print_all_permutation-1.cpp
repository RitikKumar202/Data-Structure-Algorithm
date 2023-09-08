// Print all permutation of a String/Array ---> Approach-1
// No. of permutation = n!
// TC: n!*n , SC: O(n)+O(n)

#include <bits/stdc++.h>
using namespace std;

void printAllPermutation(vector<int> &arr, vector<int> &ds, int freq[]) {
  if (ds.size() == arr.size()) {
    for (auto it : ds) {
      cout << it << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < arr.size(); i++) {
    if (freq[i] == 0) {
      ds.push_back(arr[i]);
      freq[i] = 1;
      printAllPermutation(arr, ds, freq);
      ds.pop_back();
      freq[i] = 0;
    }
  }
}

int main() {
  vector<int> arr = {1, 2, 3};
  vector<int> ds;
  int freq[arr.size()] = {0};
  // for (int i = 0; i < arr.size(); i++){
  //   freq[i] = 0;
  // }
  printAllPermutation(arr, ds, freq);
}

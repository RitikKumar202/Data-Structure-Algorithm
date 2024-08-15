// Find maximum element in bitonic array(bitonic array means monotonically
// increasing then monotonically decreasing)
#include <bits/stdc++.h>
using namespace std;

int max_element(int a[], int n) {
  int s = 0;
  int e = n - 1;

  while (s <= e) {
    int mid = (s + e) / 2;
    if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1]) {
      return a[mid];
    } else if (a[mid] < a[mid + 1]) {
      s = mid + 1;
    } else {
      e = mid - 1;
    }
  }
}

int main() {
  int a[] = {1, 3, 5, 11, 14, 10, 8, 5};
  int n = sizeof(a) / sizeof(a[0]);

  cout << max_element(a, n);
}
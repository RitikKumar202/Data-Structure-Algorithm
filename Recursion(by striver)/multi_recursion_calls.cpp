// ====================== Lecture-5 ===================
// Multiple Recursion Calls
// Solved using Fibonacci Series(nth fibonacci number)
// Time complex = exponential 2^n(near about)
#include <bits/stdc++.h>
using namespace std;

int func(int n) {
  if (n <= 1)
    return n;

  int last = func(n - 1);
  int second_last = func(n - 2);

  return last + second_last;
}

int main() {
  int n = 4;
  cout << func(n);
}
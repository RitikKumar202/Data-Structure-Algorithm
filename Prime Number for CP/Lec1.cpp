//Check for prime, Get divisors, Practice problem
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if ((n / i) != i) {
                cnt++;
            }
        }
    }

    if (cnt == 2) {
        cout << n << " is a prime number";
    }
    else {
        cout << n << " is not a prime number";
    }
}
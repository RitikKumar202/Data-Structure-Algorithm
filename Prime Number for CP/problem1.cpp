// How many numbers in the range (1- 10^6) have min prime factor as the number n
//  Ex : N=25, n=2, output=12
#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;
int sieve[N + 1];
void createSieve() {
	for (int i = 2; i <= N; i++) {
		sieve[i] = 1;
	}

	for (int i = 2; i * i <= N; i++) {
		if (sieve[i] == 1) {
			for (int j = i * i; j <= N; j += i) {
				if (sieve[j] != 0) {
					sieve[i]++;
					sieve[j] = 0;
				}
			}
		}
	}
}

int main() {
	createSieve();

	int q;
	cin >> q;
	while (q--) {
		int n;
		cin >> n;
		// O(1)
		cout << sieve[n] << "\n";
	}
}
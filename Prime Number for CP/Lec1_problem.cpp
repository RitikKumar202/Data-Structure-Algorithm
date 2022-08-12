/* Product of Three Numbers
   condition : a!=b, b!=c , c!=1
   Input: 64 , 32 , 97 , 12345
   Output: Yes(2,4,8) , No , No , Yes(3,5,823)
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int a = n, b = n, c = n;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                a = i;
                break;
            }
        }

        n = n / a;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                if (i != a) {
                    b = min(b, i);
                }
                if ( (n / i) != i) {
                    if ( (n / i) != a) {
                        b = min(b, n / i);
                    }
                }
            }
        }

        c = n / b;
        if (a != b && b != c && c != 1) {
            cout << "YES" << "\n";
            cout << a << " " << b << " " << c << "\n";
        }
        else {
            cout << "NO" << "\n";
        }
    }
}
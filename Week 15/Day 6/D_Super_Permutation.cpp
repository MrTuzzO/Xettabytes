#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int s = 0, l = n - 1;
        if (n == 1) {
            cout << "1\n";
        } else if (n % 2 == 1) {
            cout << "-1\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (i % 2 == 1) {
                    cout << i << " ";
                } else {
                    cout << n - i << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
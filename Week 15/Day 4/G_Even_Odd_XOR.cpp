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
        if (n % 4 == 0) {
            for (size_t i = 2; i < n + 2; i++) {
                cout << i << " ";
            }
            cout << endl;
        } else if (n % 4 == 1) {
            cout << "0 ";
            for (size_t i = 2; i < n + 1; i++) {
                cout << i << " ";
            }
            cout << endl;
        } else if (n % 4 == 2) {
            cout << "2 1 3 4 12 8 ";
            int e = 14;
            for (size_t i = 1; i <= n - 6; i++) {
                cout << e << " ";
                e++;
            }
            cout << endl;
        } else {
            cout << "2 1 3 ";
            int e = 4;
            for (size_t i = 1; i <= n - 3; i++) {
                cout << e << " ";
                e++;
            }
            cout << endl;
        }
    }
    return 0;
}

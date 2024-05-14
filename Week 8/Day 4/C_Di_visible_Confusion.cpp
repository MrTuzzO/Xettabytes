#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool ok = true;

        int count = 0;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;

            for (int j = i + 1; j >= 2; j--) {
                if (x % j != 0) {
                    count++;
                    break;
                }
            }
        }
        if (count == n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
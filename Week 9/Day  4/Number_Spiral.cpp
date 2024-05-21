#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin >> x >> y;

        if (y > x) {
            if (y % 2 == 1)
                cout << y * y - x + 1 << endl;
            else
                cout << (y - 1) * (y - 1) + x << endl;
        } else {
            if (x % 2 == 0)
                cout << x * x - y + 1 << endl;
            else {
                cout << (x - 1) * (x - 1) + y << endl;
            }
        }
    }
    return 0;
}
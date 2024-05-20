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
        ll a, b;
        cin >> a >> b;

        ll mn = min(a, b), mx = max(a, b);
        if (mn * 2 == mx)
            cout << "YES\n";
        else if (mn * 2 < mx)
            cout << "NO\n";
        else if (a % 3 == 0 and b % 3 == 0)
            cout << "YES\n";
        else if ((a % 3 == 1 and b % 3 == 2) or (a % 3 == 2 and b % 3 == 1))
            cout << "YES\n";
        else {
            cout << "NO\n";
        }
    }
    return 0;
}
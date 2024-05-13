#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll x;
    cin >> x;

    ll ans = 0;
    for (ll i = 1; i * i <= x; i++) {
        if (x % i == 0 and lcm(i, x / i) == x) ans = i;
    }
    cout << ans << " " << x / ans;
    return 0;
}
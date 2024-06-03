#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    vector<ll> arr(n + 1);
    for (size_t i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    vector<ll> d(n + 2, 0);
    while (q--) {
        int l, r;
        cin >> l >> r;
        d[l]++;
        d[r + 1]--;
    }
    for (size_t i = 1; i <= n; i++) {
        d[i] = d[i] + d[i - 1];
    }

    sort(arr.begin(), arr.end(), greater<int>());
    sort(d.begin(), d.end(), greater<int>());

    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (arr[i] * d[i]);
    }
    cout << ans;
    return 0;
}
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
        int n;
        cin >> n;
        vector<ll> arr(n);

        map<ll, int> cnt;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cnt[__lg(arr[i])]++;
        }
        ll ans = 0;
        for (auto it : cnt) {
            ans += (1LL * it.second * (it.second - 1) / 2);
        }
        cout << ans << endl;
    }
    return 0;
}
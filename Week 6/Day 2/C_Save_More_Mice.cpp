#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        ll ans = 0, cat_time = n;
        for (int i = k - 1; i >= 0; i--) {
            ll mice_time = n - v[i];
            if (mice_time < cat_time) ans++;
            cat_time -= mice_time;
            if (mice_time >= cat_time) break;
        }
        cout << ans << endl;
    }
    return 0;
}
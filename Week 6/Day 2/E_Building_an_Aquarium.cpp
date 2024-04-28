#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        auto isOk = [&](ll mid) {
            ll count = 0;
            for (int i = 0; i < n; i++) {
                if (v[i] < mid) count += (mid - v[i]);
                if (v[i] > mid) break;
            }
            if (count <= x)
                return true;
            else
                return false;
        };

        ll ans = v[0], l = v[0] + 1, r = 2 * 1e9;
        while (l <= r) {
            ll mid = (l + r) / 2;
            if (isOk(mid)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
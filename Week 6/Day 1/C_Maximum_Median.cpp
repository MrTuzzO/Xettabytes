#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    auto isOk = [&](ll mid) {
        ll count = 0;
        for (int i = n / 2; i < n; i++) {
            if (v[i] < mid) {
                count += (mid - v[i]);
            }
        }
        return count <= k;
    };

    ll l = v[n / 2], r = 2 * 10e9, ans = v[n / 2];
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (isOk(mid)) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, t;
    cin >> n >> t;
    vector<ll> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    auto isOk = [&](ll key) {
        ll c = 0;
        for (int i = 0; i < n; i++) {
            c += (key / v[i]);
            if(c >= t){
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 1e18, ans;
    while (l <= r) {
        ll mid = (l + r) / 2;
        if (isOk(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}
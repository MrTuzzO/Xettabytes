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

        ll l = 1, r = 2 * 1e9, ans = 0;
        while (l <= r) {
            ll mid = (l + r) / 2;
            ll x = mid - (mid / n);
            if (x == k) {
                ans = mid;
                r = mid - 1;
            } else if (x > k) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
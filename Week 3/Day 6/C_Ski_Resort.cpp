#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> arr;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x > q)
                arr.push_back(0);
            else
                arr.push_back(1);
        }

        ll count = 0, ans = 0;
        for (int i = 0; i < n; ++i) {
            if (arr[i] == 1) {
                count++;
            } else {
                if (count >= k) {
                    ans += (count - k + 1) * (count - k + 2) / 2;
                }
                count = 0;
            }
        }
        if (count >= k) {
            ans += (count - k + 1) * (count - k + 2) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}

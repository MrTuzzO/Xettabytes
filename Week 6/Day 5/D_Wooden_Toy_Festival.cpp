#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        auto isOk = [&](ll dif) {
            int carvers = 1;
            int l = 0, r = 1;
            while (r < n) {
                if (arr[l] + dif + dif >= arr[r]) {
                    r++;
                } else {
                    carvers++;
                    l = r;
                    r = l;
                }
            }
            return (carvers <= 3);
        };

        ll l = 0, r = 1e18, ans;
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
    }

    return 0;
}
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

        auto isOk = [&](int key) {
            int count = 0;
            return count;
        };

        int l = 0, r = n, ans = -1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (isOk(mid)) {
                ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }
        cout << ans << endl;
    }

    return 0;
}
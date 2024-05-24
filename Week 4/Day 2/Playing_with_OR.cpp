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
        int n, k;
        cin >> n >> k;

        vector<ll> arr(n);
        for (size_t i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int l = 0, r = 0, ans = 0, oddCnt = 0;
        while (r < n) {
            if (arr[r] % 2 == 1) oddCnt++;
            if (r - l + 1 == k) {
                if (oddCnt > 0) {
                    ans++;
                }
                if (arr[l] % 2 == 1) oddCnt--;
                l++;
            }
            r++;
        }
        cout << ans << endl;
    }
    return 0;
}
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

        int l = 0, r = 0, count = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                count++;
                if (count >= k) {
                    ll sum = count - k + 1;
                    ll add = (sum * (sum + 1)) / 2;
                    ans += add;
                }
            }
            count = 0;
            l = r;
        }
        cout << ans << endl;
    }
    return 0;
}
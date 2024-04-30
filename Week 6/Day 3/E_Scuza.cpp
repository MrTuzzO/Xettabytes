#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> arr(n + 1);
        vector<ll> preSum(n + 1);
        vector<ll> preMax(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            preSum[i] = preSum[i - 1] + arr[i];
            preMax[i] = max(preMax[i - 1], arr[i]);
        }

        while (q--) {
            ll x;
            cin >> x;
            auto it = upper_bound(preMax.begin(), preMax.end(), x);
            int index = it - preMax.begin();
            cout << preSum[index - 1] << " ";
        }
        cout << endl;
    }

    return 0;
}
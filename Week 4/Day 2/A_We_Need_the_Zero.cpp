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
        int n;
        cin >> n;

        vector<int> arr(n);
        int curXor = 0;
        for (size_t i = 0; i < n; i++) {
            cin >> arr[i];
            curXor ^= arr[i];
        }

        for (size_t i = 0; i < n; i++) {
            arr[i] ^= curXor;
        }

        int ans = 0;
        for (size_t i = 0; i < n; i++) {
            ans ^= arr[i];
        }

        if (ans == 0) cout << curXor<<endl;
        else
            cout << "-1\n";
    }
    return 0;
}
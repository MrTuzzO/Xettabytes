#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> arr(n);
        for (size_t i = 0; i < n; i++) cin >> arr[i];

        ll ans = 0;
        pbds<ll> p;
        for (int i = n - 1; i >= 0; i--) {
            ans += p.order_of_key(arr[i]);
            p.insert(arr[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
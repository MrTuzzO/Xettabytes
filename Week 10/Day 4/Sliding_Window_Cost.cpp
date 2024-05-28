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

    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (size_t i = 0; i < n; i++) cin >> arr[i];

    int l = 0, r = 0;
    pbds<pair<ll, int>> p;
    while (r < n) {
        p.insert({arr[r], r});
        if (r - l + 1 == k) {
            auto it = p.find_by_order((k - 1) / 2);
            ll need = 0;
            for (auto x : p) {
                need += abs(x.first - it->first);
            }
            cout << need << " ";
            p.erase({arr[l], l});
            l++;
        }
        r++;
    }
    return 0;
}

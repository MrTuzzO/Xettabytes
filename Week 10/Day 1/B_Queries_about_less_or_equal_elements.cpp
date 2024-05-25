#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag,
                  tree_order_statistics_node_update>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    pbds<ll> p;
    for (size_t i = 0; i < n; i++) {
        ll x;
        cin >> x;
        p.insert(x);
    }

    while (m--) {
        ll x;
        cin >> x;
        cout << p.order_of_key(x + 1)<<" ";
    }
    return 0;
}
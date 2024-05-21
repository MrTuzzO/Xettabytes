#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    ll x;
    cin >> x;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    ll preSum = 0, ans = 0;
    map<ll, int> isAvail;
    isAvail[0]++;

    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        ll need = preSum - x;
        ans += isAvail[need];
        isAvail[preSum]++;
    }
    cout << ans;
    return 0;
}
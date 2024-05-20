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
    
    int l = 0, r = 0, ans = 0, curSum = 0;
    while (r < n) {
        curSum += arr[r];
        if (curSum > x) {
            while (curSum > x && l <= r) {
                curSum -= arr[l];
                l++;
            }
        }
        if (curSum == x) {
            ans++;
        }
        r++;
    }
    cout << ans;
    return 0;
}
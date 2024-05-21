#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    map<ll, int> isAvil;
    ll preSum = 0, ans = 0;
    isAvil[0]++;

    for (int i = 0; i < n; i++) {
        preSum += arr[i];
        ll need = (preSum % n + n) % n;
        ans += isAvil[need];
        isAvil[need]++;
    }
    cout << ans << endl;
    return 0;
}

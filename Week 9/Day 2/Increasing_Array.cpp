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

    ll ans = 0;
    for (int i = 1; i < n; i++) {
        if(arr[i-1] > arr[i]){
            ll need = arr[i - 1] - arr[i]; 
            ans += need;
            arr[i] += need;
        }
    }
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;

    ll divByA = n / a;
    ll divByB = n / b;
    ll divByAB = n / (lcm(a, b));

    ll ans = 0;
    if(p > q) ans = (divByA * p) + ((divByB - divByAB) * q);
    else ans = ((divByA - divByAB) * p) + (divByB * q);
    
    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;

    if (n == 1) cout << "1\n";
    else if (n <= 3) cout << "NO SOLUTION\n";
    else {
        for (int i = 2; i <= n; i+=2) cout << i << " ";
        for (int i = 1; i <= n; i+=2) cout << i << " ";
    }
    return 0;
}
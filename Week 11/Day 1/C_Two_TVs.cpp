#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    map<ll, int> c;
    while (n--) {
        ll l, r;
        cin >> l >> r;
        c[l]++;
        c[r + 1]--;
    }
    int sum = 0;
    for (auto it : c){
        sum += it.second;
        if(sum>2){
            NO;
            return 0;
        }
    }
    YES;
    return 0;
}
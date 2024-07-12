#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, k;
    cin >> n >> k;

    ll l = 0, r = n;
    while (l <= r) {
        long long m = (l + r) / 2;
        if ((n - m) * (n - m + 1) / 2 - m == k){
            cout << m;
            return 0;
        }else if((n - m) * (n - m + 1) / 2 - m < k){
            r = m - 1;
        }else{
            l = m + 1;
        }
            
    }
    return 0;
}

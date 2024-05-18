#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll gcd(ll a, ll b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        ll gcdEvenInd = 0, gcdOddInd = 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) {
                gcdEvenInd = gcd(gcdEvenInd, arr[i]);
            } else {
                gcdOddInd = gcd(gcdOddInd, arr[i]);
            }
        }

        bool flag1 = true, flag2=  true;
        for (int i = 0; i < n; i += 2) {
            if (arr[i] % gcdOddInd == 0) flag1 = false;
        }
        for (int i = 1; i < n; i += 2) {
            if (arr[i] % gcdEvenInd == 0) flag2 = false;
        }

        if (flag1 and flag2) cout << max(gcdEvenInd, gcdOddInd)<<endl;
        else if(flag1)
            cout << gcdOddInd << endl;
        else if(flag2)
            cout << gcdEvenInd << endl;
        else
            cout << "0\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<int> arr(n);

        for (size_t i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (n % 2 == 0) {
            cout << "2" << endl << "1 " << n << endl << "1 " << n << endl;
        } else {
            cout << "4" << endl;
            cout << "1 " << n << endl;
            cout << "2 " << n << endl;
            cout << "1 2\n1 2" << endl;
        }
    }

    return 0;
}
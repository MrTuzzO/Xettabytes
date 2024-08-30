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
        cin >> n;
        vector<int> odd, even;
        for (size_t i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (x % 2) {
                odd.push_back(i);
            } else {
                even.push_back(i);
            }
        }

        if (odd.size() >= 3) {
            cout << "YES\n" << odd[0] << " " << odd[1] << " " << odd[2] << endl;
        } else if (odd.size() >= 1 and even.size() >= 2) {
            cout << "YES\n"
                 << even[0] << " " << even[1] << " " << odd[0] << endl;
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
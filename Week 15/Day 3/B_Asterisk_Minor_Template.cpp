#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

string common(string a, string b) {
    for (size_t i = 0; i < a.length() - 1; i++) {
        for (size_t j = 0; j < b.length() - 1; j++) {
            if (a[i] == b[j] and a[i + 1] == b[j + 1]) {
                return a.substr(i, 2);
            }
        }
    }
    return "";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        if (a[0] == b[0]) {
            YES;
            cout << a[0] << "*\n";
        } else if (a[a.length() - 1] == b[b.length() - 1]) {
            YES;
            cout << "*" << a[a.length() - 1] << "\n";
        } else {
            if (common(a, b) == "") NO;
            else {
                YES;
                cout << "*" << common(a, b) << "*\n";
            }
        }
    }
    return 0;
}

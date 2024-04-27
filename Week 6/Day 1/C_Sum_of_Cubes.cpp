#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    vector<ll> aq;
    for (int i = 1; i <= 1e4; i++) {
        aq.push_back(pow(i, 3));
    }

    while (t--) {
        ll x;
        cin >> x;
        bool isPossible = false;

        for (int i = 1; i <= 1e4; i++) {
            ll key = x - pow(i, 3);
            ll l = 0, r = 1e4;
            while (l <= r) {
                ll mid = (l + r) / 2;
                if (aq[mid] == key) {
                    isPossible = true;
                    break;
                } else if (aq[mid] < key) {
                    l = mid + 1;
                } else {
                    r = mid - 1;
                }
            }
        }
        if (isPossible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin >> a >> b;

        if (b == 1)
            cout << "NO\n";
        else {
            ll goodNum = 0, nearGood1 = 0, nearGood2 = 0;
            cout << "YES\n";
            if (b == 2) {
                if (a == 1) {
                    cout << "1 3 4\n";
                } else {
                    b = a * b;
                    goodNum = a * b;
                    nearGood1 = a;
                    nearGood2 = goodNum - nearGood1;
                    cout << nearGood1 << " " << nearGood2 << " " << goodNum
                         << endl;
                }
            } else {
                goodNum = a * b;
                nearGood1 = a;
                nearGood2 = goodNum - nearGood1;
                cout << nearGood1 << " " << nearGood2 << " " << goodNum << endl;
            }
        }
    }
    return 0;
}
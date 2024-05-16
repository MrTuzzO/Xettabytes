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
        int a, b, l;
        cin >> a >> b >> l;

        set<int> k;
        for (int i = 0; i <= 20; i++) {
            for (int j = 0; j <= 20; j++) {
                int div = round(pow(a, i)) * round(pow(b, j));
                if (l % div == 0) {
                    k.insert(l / div);
                }
            }
        }
        cout << k.size() << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> posX;
        vector<ll> negX;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x > 0) posX.push_back(x);
            else negX.push_back(abs(x));
        }

        sort(posX.begin(), posX.end(), greater<>());
        sort(negX.begin(), negX.end(), greater<>());

        ll dist = 0;
        if (negX.size() == 0) {
            for (int i = 0; i < posX.size(); i += k) dist += posX[i] * 2;
            cout << dist - posX[0] << endl;
        } else if (posX.size() == 0) {
            for (int i = 0; i < negX.size(); i += k) dist += negX[i] * 2;
            cout << dist - negX[0] << endl;
        } else {
            for (int i = 0; i < posX.size(); i += k) dist += posX[i] * 2;
            for (int i = 0; i < negX.size(); i += k) dist += negX[i] * 2;
            cout << dist - (max(posX[0], negX[0])) << endl;
        }
    }
    return 0;
}

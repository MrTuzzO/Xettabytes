#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n, m, h;
        cin >> n >> m >> h;
        vector<ll> cars(n), power(m);

        for (int i = 0; i < n; i++) {
            cin >> cars[i];
        }

        for (int i = 0; i < m; i++) {
            cin >> power[i];
        }

        sort(cars.begin(), cars.end(), greater<int>());
        sort(power.begin(), power.end(), greater<int>());

        int len = min(n, m);

        ll ans = 0;
        for (int i = 0; i < len; i++) {
            if(power[i] * h > cars[i]){
                ans += cars[i];
            }else{
                ans += power[i] * h;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
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
        vector<pair<int, int>> arr;
        for (size_t i = 0; i < n; i++) {
            int x, y;
            cin >> x >> y;
            arr.push_back({x, y});
        }

        pair<int, int> mx = arr[0];
        bool flag = true;
        for (size_t i = 1; i < n; i++) {
            if (mx.first <= arr[i].first and mx.second <= arr[i].second)
                flag = false;
        }

        (flag) ? cout << mx.first << endl : cout << "-1\n";
    }
    return 0;
}
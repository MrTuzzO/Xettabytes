#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> arr(m + 1);
    for (size_t i = 0; i <= m; i++) {
        cin >> arr[i];
    }

    vector<vector<int>> bitmaskList;
    for (int i = 0; i <= m; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            if ((arr[i] >> j) & 1)
                v.push_back(1);
            else
                v.push_back(0);
        }
        bitmaskList.push_back(v);
    }

    int ans = 0;
    vector<int> fedorMask = bitmaskList[m];
    for (int i = 0; i < bitmaskList.size() - 1; i++) {
        int count = 0;
        vector<int> v = bitmaskList[i];
        for (int j = 0; j < n; j++) {
            if (fedorMask[j] != v[j]) count++;
        }
        if (count <= k) ans++;
    }
    cout << ans << endl;
    return 0;
}
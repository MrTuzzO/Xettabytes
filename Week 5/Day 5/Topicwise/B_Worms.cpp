#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    vector<int> juicy(m);
    for (int i = 0; i < m; i++) {
        cin >> juicy[i];
    }

    vector<int> preSum(n);
    preSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        preSum[i] = preSum[i - 1] + arr[i];
    }

    for (int i = 0; i < m; i++) {
        auto it = lower_bound(preSum.begin(), preSum.end(), juicy[i]);
        cout << it - preSum.begin() + 1 << endl;
    }

    return 0;
}
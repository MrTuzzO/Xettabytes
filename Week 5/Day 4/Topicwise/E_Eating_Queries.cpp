#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> arr(n);
        ll totalSum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            totalSum += arr[i];
        }
        sort(arr.begin(), arr.end(), greater<int>());

        vector<int> preSum(n);
        preSum[0] = arr[0];
        for (int i = 1; i < n; i++) {
            preSum[i] = preSum[i - 1] + arr[i];
        }

        while (q--) {
            int k;
            cin >> k;
            int ind = -1;
            if (k > totalSum)
                cout << "-1\n";
            else if (k == totalSum)
                cout << n << endl;
            else {
                auto it = lower_bound(preSum.begin(), preSum.end(), k);
                cout << (it - preSum.begin()) + 1 << endl;
            }
        }
    }
    return 0;
}
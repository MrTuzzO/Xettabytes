#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++) cin >> arr[i];

        int ans = 0;
        // case 1 direct result
        ans = arr[n - 1] - arr[0];

        // case 2: segment include n,1
        for (int i = 0; i < n - 1; i++) {
            int j = i + 1;
            ans = max(ans, arr[i] - arr[j]);
        }
        // case2: segment include only n, 1 fixed
        for (int i = 1; i < n; i++) {
            ans = max(ans, arr[i] - arr[0]);
        }
        //case 4 segment include only 1, n fixed
        for (int i = 0; i < n-1; i++) {
            ans = max(ans, arr[n-1] - arr[i]);
        }

        cout << ans << endl;
    }
    return 0;
}
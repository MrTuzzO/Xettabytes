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

        int XOR = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            XOR ^= arr[i];
        }
        int ans = XOR;
        for (int i = 0; i < n; i++) {
            ans = min(ans, (XOR ^ arr[i]));
        }
        cout << ans<<endl;
    }
    return 0;
}

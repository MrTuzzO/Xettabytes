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
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int mn = INT_MAX;
        for (int i = 1; i < n - 1; i++) {
            mn = min(mn, max(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])));
        }
        mn = min(mn, abs(arr[1] - arr[0]));
        mn = min(mn, abs(arr[n - 1] - arr[n - 2]));
        cout << mn<<endl;
    }
    return 0;
}
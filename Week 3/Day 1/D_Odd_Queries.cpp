#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        long long int arr[n+1];
        arr[0] = 0;
        for (int i = 1; i <= n; i++) {
            cin >> arr[i];
            arr[i] = arr[i - 1] + arr[i];
        }
        while (q--) {
            int l, r;
            long long int k;
            cin >> l >> r >> k;

            long long int currentSum = arr[n];
            long long int sumBetweenLR = arr[r] - arr[l - 1];
            long long int newSum = k * (r - l + 1);
            long long int ansSum = currentSum - sumBetweenLR + newSum;
            (ansSum % 2 == 1)? cout << "YES\n" : cout << "NO\n";
        }
    }
    return 0;
}
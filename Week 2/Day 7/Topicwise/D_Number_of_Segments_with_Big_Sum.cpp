#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long int s;
    cin >> s;

    long long int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    long long sum = 0, ans = 0;
    while (r < n) {
        sum += arr[r];
        while ((sum - arr[l]) >= s) {
            sum -= arr[l];
            l++;
        }
        if (sum >= s) {
            ans += (l + 1);
        }
        r++;
    }
    cout << ans << endl;

    return 0;
}
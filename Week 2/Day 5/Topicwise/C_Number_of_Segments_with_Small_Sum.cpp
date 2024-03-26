#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long int s;
    cin >> n >> s;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long int l = 0, r = 0, ans = 0, sum = 0;
    while (r < n) {
        sum += arr[r];
        if (sum <= s) {
            ans += (r - l + 1);
        } else {
            while (sum > s and l < r) {
                sum -= arr[l];
                l++;
            }
            if (sum <= s) ans += (r - l + 1);
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
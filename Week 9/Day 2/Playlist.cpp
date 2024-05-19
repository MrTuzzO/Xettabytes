#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<ll, int> cnt;
    int l = 0, r = 0, ans = 0;
    while (r < n) {
        if (cnt[arr[r]] >= 1) {
            cnt[arr[l]]--;
            l++;
        } else {
            cnt[arr[r]]++;
            r++;
            ans = max(ans, r - l);
        }
    }
    cout << ans << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n, k;
    cin >> n >> k;
    long long int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    multiset<long long int> set;
    long long int l = 0, r = 0, ans = 0;
    while (r < n) {
        set.insert(arr[r]);
        if (*set.rbegin() - *set.begin() <= k) {
            ans += (r - l + 1);
        } else {
            while (*set.rbegin() - *set.begin() > k) {
                auto it = set.find(arr[l]);
                set.erase(it);
                l++;
            }
            if (*set.rbegin() - *set.begin() <= k) {
                ans += (r - l + 1);
            }
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
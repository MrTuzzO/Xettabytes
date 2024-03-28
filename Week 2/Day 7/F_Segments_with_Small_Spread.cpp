#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long int k;
    cin >> k;
    long long int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int l = 0, r = 0;
    long long int ans = 0;
    multiset<long long int> set;
    while (r < n) {
        set.insert(arr[r]);
        if (*set.rbegin() - *set.begin() <= k) {
            ans += r - l + 1;
        } else {
            while (*set.rbegin() - *set.begin() > k) {
                auto it = set.find(arr[l]);
                set.erase(it);
                l++;
            }
            if (*set.rbegin() - *set.begin() <= k) ans += r - l + 1;
        }
        r++;
    }
    cout << ans;
    return 0;
}
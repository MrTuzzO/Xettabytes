#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());

    int k;
    cin >> k;
    while (k--) {
        ll l, r;
        cin >> l >> r;

        auto lower = lower_bound(arr.begin(), arr.end(), l);
        auto upper = upper_bound(arr.begin(), arr.end(), r);

        cout << (upper - arr.begin()) - (lower - arr.begin()) << " ";
    }

    return 0;
}
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
    int q;
    cin >> q;
    while (q--) {
        ll k;
        cin >> k;
        auto it = upper_bound(arr.begin(), arr.end(), k);
        cout << it - arr.begin() << endl;
    }
    return 0;
}
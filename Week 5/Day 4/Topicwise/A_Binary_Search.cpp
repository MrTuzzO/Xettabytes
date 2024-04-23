#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> q(k);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }

    for (int i = 0; i < k; i++) {
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (arr[mid] == q[i]) {
                flag = true;
                break;
            } else if (arr[mid] > q[i]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        if (flag) cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
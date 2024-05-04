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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        int mxDif = 0;
        for (int i = 0; i < n; i++) mxDif = max(mxDif, a[i] - b[i]);

        for (int i = 0; i < n; i++) {
            a[i] = a[i] - mxDif;
            if (a[i] < 0) a[i] = 0;
        }
        (a == b) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}
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
        string s;
        cin >> s;

        int ans = INT_MAX;
        for (char c = 'a'; c <= 'z'; c++) {
            int l = 0, r = n - 1, count = 0;
            while (l <= r) {
                if (s[l] == s[r]) {
                    l++;
                    r--;
                } else if (s[l] == c) {
                    l++;
                    count++;
                } else if (s[r] == c) {
                    r--;
                    count++;
                } else {
                    count = INT_MAX;
                    break;
                }
            }
            ans = min(ans, count);
        }
        if (ans == INT_MAX) cout << "-1\n";
        else cout << ans << endl;
    }

    return 0;
}
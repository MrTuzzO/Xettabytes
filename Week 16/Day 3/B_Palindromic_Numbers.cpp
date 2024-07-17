#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int len;
        cin >> len;
        string number;
        cin >> number;

        string ans;
        if (number[0] != '9') {
            for (size_t i = 0; i < len; i++) {
                char x = (9 - (number[i] - '0')) + '0';
                ans += x;
            }
            cout << ans << endl;
        } else {
            int carry = 0;
            for (int i = len - 1; i >= 0; i--) {
                int a = number[i] - '0';
                a += carry;
                if (a > 1) {
                    int x = 11 - a;
                    carry = 1;
                    ans += x + '0';
                } else {
                    carry = 0;
                    int x = 1 - a;
                    ans += x + '0';
                }
            }
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
        }
    }
    return 0;
}
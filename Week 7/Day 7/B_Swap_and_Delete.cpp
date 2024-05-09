#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int c0 = 0, c1 = 0;
        for (char c : s) (c == '0') ? c0++ : c1++;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                if (c1 > 0) {
                    c1--;
                } else
                    break;
            }
            if (s[i] == '1') {
                if (c0 > 0) {
                    c0--;
                } else
                   break;
            }
        }
        cout << c0+c1 << endl;
    }

    return 0;
}
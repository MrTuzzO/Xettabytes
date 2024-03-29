#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> v(n);
        for (int i = 0; i < n; i++) cin >> v[i];

        vector<string> v2;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                v2.push_back(v[i] + v[j]);
            }
        }

        string binString;
        bool flag = false;
        for (string s1 : v) {
            for (string s2 : v2) {
                if (s1 == s2) flag = true;
            }
            if (flag)
                binString += '1';
            else
                binString += '0';
            flag = false;
        }
        cout << binString << endl;
    }
    return 0;
}
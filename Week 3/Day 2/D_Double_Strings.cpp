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
        map<string, int> fre;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            fre[v[i]]++;
        }

        string binString;

        for (string s : v) {
            int l = 0, r = 0;
            string a, b;

            bool flag = false;
            for (int i = 0; i < s.length(); i++) {
                a = s.substr(0, l);
                b = s.substr(r, s.length() - 1);
                l++;
                r++;

                if (fre[a] >= 1 and fre[b] >= 1) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                binString += '1';
            } else {
                binString += '0';
            }
            flag = false;
        }
        cout << binString << endl;
    }
    return 0;
}
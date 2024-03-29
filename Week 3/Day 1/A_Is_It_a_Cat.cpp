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
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);

        string s2 = "meow";
        string s3;

        for (int i = 0; i < s.length(); i++) {
            if (s3.empty() or s3.back() != s[i]) {
                s3 += s[i];
            }
        }
        (s3 == s2) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
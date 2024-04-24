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
        int size = s.length();
        set<char> ele;
        for (int i = 0; i < size / 2; i++) {
            ele.insert(s[i]);
        }
        if (ele.size() >= 2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

bool isV(char c) {
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;

    int l1 = s.length(), l2 = t.length();
    if (l1 != l2)
        NO;
    else {
        vector<int> vIndx1, vIndx2;
        for (size_t i = 0; i < l1; i++) {
            if (isV(s[i])) vIndx1.push_back(i);
            if (isV(t[i])) vIndx2.push_back(i);
        }
        if (vIndx1 == vIndx2) YES;
        else
            NO;
    }
    return 0;
}
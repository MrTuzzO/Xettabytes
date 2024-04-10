#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<string> s(n);

    for (int i = 0; i < n; i++) cin >> s[i];

    map<string, int> fre;
    string ans;

    for (int i = n - 1; i >= 0; i--) {
        int len = s[i].size();
        string last2 = s[i].substr(len - 2, len);
        if(fre[s[i]] < 1){
            ans += last2;
            fre[s[i]]++;
        }
    }
    cout << ans;
    return 0;
}
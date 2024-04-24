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

        string ans;

        for (int i = n - 1; i >= 0; i--) {
            if (s[i] == '0') {
                string ch;
                ch = ch + s[i - 2] + s[i - 1];
                int num = stoi(ch);
                char c = num + 96;
                ans += c;
                i -= 2;
            }else{
                char c = s[i] + '0';
                ans += c;
            }
        }
        reverse(ans.begin(), ans.end());
        cout << ans<<endl;
    }

    return 0;
}
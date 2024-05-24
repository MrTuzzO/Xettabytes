#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

const int mxN = (1 << 15);
vector<int> allPalindrome;
void generate_palindrome() {
    for (size_t i = 0; i < mxN; i++) {
        string s = to_string(i);
        int l = 0, r = s.length() - 1;
        bool flag = true;
        while (l <= r) {
            if (s[l] != s[r]) {
                flag = false;
                break;
            }
            l++;
            r--;
        }
        if (flag) allPalindrome.push_back(i);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    generate_palindrome();

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        vector<int> cnt(mxN);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        ll ans = n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < allPalindrome.size(); j++) {
                ans += cnt[arr[i] ^ allPalindrome[j]];
            }
        }
        cout << ans / 2 << endl;
    }
    return 0;
}
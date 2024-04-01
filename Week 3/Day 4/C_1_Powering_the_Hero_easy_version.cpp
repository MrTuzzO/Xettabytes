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
        stack<ll> st1;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            st1.push(x);
        }
        stack<ll> st;
        while (!st1.empty()) {
            ll top = st1.top();
            st1.pop();
            st.push(top);
        }

        multiset<ll> list;
        ll ans = 0;
        while (!st.empty()) {
            ll top = st.top();
            if (top > 0) {
                list.insert(top);
            } else {
                if (!list.empty()) {
                    auto add = list.rbegin();
                    ans += *add;
                    list.erase(next(add).base());
                }
            }
            st.pop();
        }
        cout << ans << endl;
    }
    return 0;
}
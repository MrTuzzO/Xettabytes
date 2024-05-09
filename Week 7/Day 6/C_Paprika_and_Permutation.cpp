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
        set<int> s;
        for (int i = 1; i <= n; i++) s.insert(i);

        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (s.find(x) == s.end()) {
                arr.push_back(x);
            } else {
                s.erase(x);
            }
        }
        sort(arr.begin(), arr.end());

        int ans = 0;
        bool flag = true;

        for (int x : arr) {
            auto need = s.begin();
            if (*need > (x - 1) / 2) {
                flag = false;
                break;
            }
            ans++;
            s.erase(need);
        }
        (flag) ? cout << ans << endl : cout << "-1\n";
    }

    return 0;
}

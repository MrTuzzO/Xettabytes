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
        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        auto isOk = [&](vector<int> v, int n, int k) {
            multiset<int> s;
            for (int x : v) s.insert(x);

            for (int i = 1; i <= k; i++) {
                int move = k - i + 1;
                if (s.empty()) return false;

                auto it = upper_bound(s.begin(), s.end(), move);
                if (it == s.begin()) return false;
                else it--;
                s.erase(it);

                if(!s.empty()){
                    int min = *s.begin();
                    min += move;
                    s.erase(s.begin());
                    s.insert(min);
                }
            }
            return true;
        };

        int l = 0, r = n, ans = 0;
        while (l <= r) {
            int k = (l + r) / 2;
            if (isOk(arr, n, k)) {
                ans = k;
                l = k + 1;
            } else {
                r = k - 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> factors;
    while (n--) {
        int x;
        cin >> x;

        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                factors[i]++;
                while (x % i == 0) {
                    x /= i;
                }
            }
        }
        if (x > 1) {
            factors[x]++;
        }
    }

    int ans = 1;
    for (auto it : factors) {
        ans = max(ans, it.second);
    }
    // for (auto it : factors) {
    //     cout << it.first << "^" << it.second << " ";
    // }
    // cout << endl;
    cout << ans << endl;
    return 0;
}

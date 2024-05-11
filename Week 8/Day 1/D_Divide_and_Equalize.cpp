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
        for (int i = 0; i < n; i++) cin >> arr[i];

        map<int, int> cnt;
        for (int i = 0; i < n; i++) {
            for (int j = 2; j * j <= arr[i]; j++) {
                if (arr[i] % j == 0) {
                    while (arr[i] % j == 0) {
                        cnt[j]++;
                        arr[i] /= j;
                    }
                }
            }
            if (arr[i] > 1) cnt[arr[i]]++;
        }
        bool flag = true;
        for (auto it : cnt) {
            if (it.second % n != 0) flag = false;
        }
        (flag) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
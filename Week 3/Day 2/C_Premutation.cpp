#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> pos(n + 1);
        int arr[n + 1][n];

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - 1; j++) {
                cin >> arr[i][j];
                pos[arr[i][j]].push_back(j);
            }
        }

        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            int max = *max_element(pos[i].begin(), pos[i].end());
            int min = *min_element(pos[i].begin(), pos[i].end());
            
            if (max == 1) ans[max] = i;
            else if (min == max) ans[max + 1] = i;
            else ans[max] = i;
            
        }
        for (int i = 1; i <= ans.size()-1; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
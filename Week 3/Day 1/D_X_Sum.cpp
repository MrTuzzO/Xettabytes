#include <bits/stdc++.h>
using namespace std;
long long int mat[202][202];
long long int findSum(int i, int j, int n, int m) {
    long long int sum = 0;
    int x = i - 1, y = j - 1;
    while (x > -1 and y > -1) {
        sum += mat[x][y];
        x--;
        y--;
    }
    x = i - 1;
    y = j + 1;
    while (x > -1 and y < m) {
        sum += mat[x][y];
        x--;
        y++;
    }
    x = i + 1;
    y = j - 1;
    while (x < n and y > -1) {
        sum += mat[x][y];
        x++;
        y--;
    }
    x = i + 1;
    y = j + 1;
    while (x < n and y < m) {
        sum += mat[x][y];
        x++;
        y++;
    }
    return sum + mat[i][j];
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        long long int maxMat[n][m];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> mat[i][j];
            }
        }

        long long ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                ans = max(ans, findSum(i, j, n, m));
            }
        }
        cout << ans << endl;
    }
    return 0;
}
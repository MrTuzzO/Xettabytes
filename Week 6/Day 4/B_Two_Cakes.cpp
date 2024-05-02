#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i < n; i++) {
        ans = max(ans, min(a / i, b / (n - i)));
    }
    cout << ans;
    return 0;
}

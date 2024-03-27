#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n;
    cin >> n;
    long long s;
    cin >> s;
    long long int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    long long int l = 0, r = 0, sum = 0, ans = INT_MAX;
    bool flag = false;
    while (r < n) {
        sum += arr[r];
        if (sum >= s) {
            flag = true;
            ans = min(ans, r - l + 1);
            while (sum >= s) {
                sum -= arr[l];
                l++;
                if (sum >= s) ans = min(ans, r - l + 1);
            }
        }
        r++;
    }
    if(flag)cout << ans << endl;
    else cout << "-1\n";
    return 0;
}
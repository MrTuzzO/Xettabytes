#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    long long int s;
    cin >> s;

    long long int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int l = 0, r = 0;
    long long ans = 0;
    map<int, int> fre;

    while (r < n) {
        fre[arr[r]]++;
        if (fre.size() <= s) {
            ans += (r - l + 1);
        } else {
            while (fre.size() > s) {
                fre[arr[l]]--;
                if(fre[arr[l]] == 0) fre.erase(arr[l]);
                l++;
            }
            if (fre.size() <= s) ans += (r - l + 1);
        }
        r++;
    }
    cout << ans;
    return 0;
}
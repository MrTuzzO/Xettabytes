#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x;
    cin >> n >> x;
    
    vector<pair<ll, int>> arr(n+1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i].first;
        arr[i].second = i;
    }

    sort(arr.begin(), arr.end());
    for (int i = 1; i <= n; i++) {
        int left = i + 1;
        int right = n;

        while (left < right) {
            ll current_sum = arr[i].first + arr[left].first + arr[right].first;
            if (current_sum == x) {
                cout << arr[i].second << " " << arr[left].second << " " << arr[right].second << endl;
                return 0;
            } else if (current_sum < x) {
                left++;
            } else {
                right--;
            }
        }
    }
    cout << "IMPOSSIBLE\n";
    return 0;
}

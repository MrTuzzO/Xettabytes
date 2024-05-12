#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<ll> arr(n);

    vector<bool> isPrime(1e6+1, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i * i <= 1e6; i++) {
        if (isPrime[i]) {
            for (ll j = i + i; j <= 1e6; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        ll root = sqrt(arr[i]);
        if (root * root == arr[i] && isPrime[root])
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
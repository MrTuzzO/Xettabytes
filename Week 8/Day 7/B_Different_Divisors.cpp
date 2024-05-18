#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    vector<bool> isPrime(1e5, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <=1e5; i++) {
        if (isPrime[i]) {
            for (int j = i + i; j <= 1e5; j += i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> prime;
    for (int i = 0; i <= 1e5; i++) {
        if (isPrime[i]) prime.push_back(i);
    }

    int t;
    cin >> t;
    while (t--) {
        int d;
        cin >> d;

        vector<ll> ans = {1};
        int count = 1;
        int i = 0, j = 0;
        while (true) {
            if (count == 3) break;
            if (ans[i] + d <= prime[j]) {
                ans.push_back(prime[j]);
                i++;
                count++;
            }
            j++;
        }
        cout << lcm(ans[1], ans[2]) << endl;
    }

    return 0;
}
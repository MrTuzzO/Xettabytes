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
        vector<ll> v(n);
        ll maxSum = 0;
        for (int i = 0; i < n; i++) {
            ll x;
            cin >> x;
            if (x != 0) {
                v.push_back(x);
                maxSum += abs(x);
            }
        }

        int count = 0;
        bool flag = false;
        for (ll x : v) {
            if(x < 0 and !flag ){
                flag = true;
                count++;
            }else if(x > 0){
                flag = false;
            }
        }
        cout << maxSum << " " << count<<"\n";
    }
    return 0;
}
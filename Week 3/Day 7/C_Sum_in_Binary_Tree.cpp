#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = 1;
        while(n != 1){
            ans += n;
            n /= 2;
        }
        cout << ans<<endl;
    }
    return 0;
}
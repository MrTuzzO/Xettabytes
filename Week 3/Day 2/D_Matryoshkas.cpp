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
        vector<ll> arr(n);
        map<ll, ll> fre;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            fre[arr[i]]++;
        }

        auto it = --fre.end();
        int len = fre.size();
        vector<pair<ll, ll>> v;
        for (int i = len; i > 0; i--) {
            v.push_back({it->first, it->second});
            it--;
        }

        ll ans = v[0].second;
        for (int i = 1; i < len; i++) {
            if(v[i].first == v[i-1].first -1){
                if(v[i].second > v[i-1].second){
                    ans += v[i].second - v[i - 1].second;
                }
            }else{
                ans += v[i].second;
            }
        }
        cout <<ans<< endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    long long int k, n;
    cin>>n>>k;
    vector<long long> a(n);
    for(long long int  i = 0; i < n; i++) cin>>a[i];
    a.erase(remove(a.begin(), a.end(), k), a.end());
    for(long long int x: a) cout<<x<<" ";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    long long int a[n], b[m];
    for(int i = 0; i < n; i++) cin>>a[i];
    for(int i = 0; i < m; i++) cin>>b[i];

    int l = 0,r = 0, count = 0;
    while(r < m){
        while(a[l] < b[r]){
            count++;
            l++;
        }
        cout<<count<<" ";
        r++;
    }
    return 0;
}
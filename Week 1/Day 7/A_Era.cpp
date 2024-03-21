#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int arr[n+1];
        vector<long long int> v;
        for(int i = 1; i <=n; i++){
            cin>>arr[i];
            if(arr[i] > i) v.push_back(arr[i] - i);
        }
        long long int res = 0;
        for(long long int x: v) if(x > res) res = x;
        cout<<res<<"\n";
    }
    return 0;
}
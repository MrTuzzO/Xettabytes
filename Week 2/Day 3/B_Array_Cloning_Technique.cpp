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
        vector<int> arr(n);
        map<int, int> fre;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            fre[arr[i]]++;
        }
        int max = INT_MIN;
        for(auto it = fre.begin(); it != fre.end(); it++){
            if(it->second > max) max = it->second;
        }
        int need = n - max;
        while(max < n){
            need++;
            max*=2;
        }
        cout<<need<<"\n";
    }
    return 0;
}
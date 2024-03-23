#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> arr;
        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            arr.insert(x);
        }
        int needToDelete = n - arr.size();
        if(needToDelete%2 == 1) cout<<arr.size()-1<<"\n";
        else cout<<arr.size()<<"\n";
    }
    return 0;
}
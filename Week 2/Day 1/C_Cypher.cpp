#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        for(int i = 0; i < n; i++){
            int o;
            string s;
            cin>>o>>s;
            for(char c: s){
                if(c == 'D') arr[i]++;
                else arr[i]--;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] < 0) cout<<arr[i]+10<<" ";
            else cout<<arr[i]%10<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
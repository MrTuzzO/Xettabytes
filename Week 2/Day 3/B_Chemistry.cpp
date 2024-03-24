#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        map<char, int> fre;
        for(char c: s) fre[c]++;

        int count = 0;
        for(auto it = fre.begin(); it != fre.end(); it++){
            if(it->second %2 == 1) count++;
        }
        if(k >= count-1)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
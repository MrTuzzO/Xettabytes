#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        map<char, int> fre;
        for(char c: s) fre[c]++;

        if(n != 5) cout<<"NO\n";
        else if(fre['T'] == 1 and fre['i'] == 1 and fre['m'] == 1 and fre['u'] == 1 and fre['r'] == 1)
            cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
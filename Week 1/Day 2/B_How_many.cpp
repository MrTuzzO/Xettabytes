#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,t;
    cin>>s>>t;
    int n = 100, count = 0;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n;  j++){
            for(int k = 0; k <= n; k++){
                if(i+j+k <= s and i*j*k <= t) count++;
            }
        }
    }
    cout<<count;
    return 0;
}
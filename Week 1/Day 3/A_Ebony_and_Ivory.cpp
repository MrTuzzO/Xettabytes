#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    for(int i = 0; i < 10000; i++){
        for(int j = 0; j< 10000; j++){
            if((a*i + b * j) == c){
                cout<<"Yes";
                flag = true;
                break;
            }
        }
        if(flag) break;
    }
    if(!flag) cout<<"No";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int x,y;
    cin>>x>>y;
    long long int mul = x, res = 0; 
    while(mul <= y){
        mul = mul * 2;
        res++;
    }
    cout<<res;
    return 0;
}
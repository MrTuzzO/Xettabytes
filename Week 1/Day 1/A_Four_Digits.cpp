#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = "000";
    string num = to_string(n);
    string res = s+num;
    cout<<res.substr((res.length()-4), res.length());
    return 0;
}
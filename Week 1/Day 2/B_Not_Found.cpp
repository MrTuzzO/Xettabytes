#include<bits/stdc++.h>
using namespace std;
char notFound(string s){
    for(char c = 'a'; c <= 'z'; c++){
        if(s.find(c) == -1){
            return c;
        }
    }
    return '0';
}
int main(){
    string s;
    cin>>s;
    char res = notFound(s);
    if(res == '0') cout<<"None";
    else cout<<res;
    return 0;
}
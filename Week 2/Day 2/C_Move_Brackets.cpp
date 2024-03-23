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
        string s;
        cin>>s;

        stack<char> st;
        int count = 0;
        for(char c: s){
            if(c == '('){
                st.push(c);
            }else if(st.empty() and c == ')'){
                count++;
            }else if(!st.empty() and c == ')'){
                st.pop();
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
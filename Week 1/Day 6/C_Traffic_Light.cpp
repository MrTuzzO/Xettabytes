#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        s+=s;
        int count = 0;
        vector<int> v;
        for(char x: s){
            if(x == 'g'){
                if(count > 0){
                    v.push_back(count);
                    count = 0;
                }
            }else if(count > 0){
                count++;
            }else if(x == c){
                count++;
            }
        }
        if(!v.empty()) cout<<*max_element(v.begin(), v.end())<<"\n";
        else cout<<"0\n";
    }
    return 0;
}

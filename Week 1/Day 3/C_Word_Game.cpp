#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<string, int> freq;
        vector<string>matrix[3];
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < n; j++){
                string x;
                cin>>x;
                matrix[i].push_back(x);
                freq[x]++;
            }
        }
        vector<int> score(3);
        for(int i = 0; i < 3; i++){
            for(string word: matrix[i]){
                if(freq[word] == 1){
                    score[i]+=3;
                }else if(freq[word] == 2){
                    score[i]+=1;
                }
            }
        }
        for(int i = 0; i < 3; i++){
            cout<<score[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
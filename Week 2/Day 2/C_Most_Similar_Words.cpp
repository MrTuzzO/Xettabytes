#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<string> arr(n);
        for(int i = 0; i<n; i++) cin>>arr[i];
        
        int min = INT_MAX;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                int sum = 0;
                for(int k = 0; k < m; k++){
                    sum += abs(arr[i][k] - arr[j][k]);
                }
                if(sum < min) min = sum;
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    vector<int> arr(n+1);
    long long int sum = 0;
    for(int i = 1; i <= n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<n*(n+1)/2 - sum;
    return 0;
}
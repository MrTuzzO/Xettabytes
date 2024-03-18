#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int arr[n], min = LLONG_MAX, sum = 0;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
        if(arr[i] < min and (arr[i]%2 != 0)) min = arr[i];
        sum += arr[i];
    }
    if(sum%2 == 0) cout<<sum;
    else cout<<sum-min;
    return 0;
}
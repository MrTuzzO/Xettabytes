#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(vector<int> a){
    int l = 0,r = a.size()-1;
    while(l < r){
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin>>arr[i];

        int l = 0, r = arr.size()-1, x, y;
        bool isKal = true;
        while(l < r){
            if(arr[l] != arr[r]){
                x = arr[l];
                y = arr[r];
                isKal = false;
                break;
            }
            l++;
            r--;
        }
        if(isKal) cout<<"YES\n";
        else{
            vector<int> v1, v2;
            for(int a: arr) if(a != x) v1.push_back(a);
            for(int a: arr) if(a != y) v2.push_back(a);
            
            bool op1 = isPalindrome(v1);
            bool op2 = isPalindrome(v2);
            if(op1 or op2) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    return 0;
}
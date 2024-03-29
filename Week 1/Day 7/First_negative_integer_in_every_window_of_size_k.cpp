#include <bits/stdc++.h>
using namespace std;
vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    long long int l = 0, r = 0;
    queue<long long int> q;
    vector<long long int> v;
    
    while(r < n){
        if(arr[r] < 0) q.push(arr[r]);
        
        if(r - l + 1 == k){
            if(!q.empty()){
                v.push_back(q.front());
                if(arr[l] == q.front()) q.pop();
            }else v.push_back(0);
            r++;
            l++;
        }else{
            r++;
        }
    }
    return v;                                         
 }
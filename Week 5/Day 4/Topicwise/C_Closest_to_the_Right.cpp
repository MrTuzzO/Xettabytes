#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<int> q(k);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++) {
        cin >> q[i];
    }

    for (int i = 0; i < k; i++) {
        int key = q[i];
        int l = 0, r = n - 1, ind = n, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if(arr[mid] >= key){
                ind = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        cout << ind + 1 << endl;
    }

    return 0;
}
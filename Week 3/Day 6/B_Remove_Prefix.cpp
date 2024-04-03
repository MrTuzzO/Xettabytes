#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];

        map<int, int> uni;
        int count = 0;
        for (int i = n - 1; i >= 0; i--) {
            if(uni[arr[i]] >= 1) break;
            uni[arr[i]]++;
            count++;
        }
        cout << n - count << endl;
    }
    return 0;
}
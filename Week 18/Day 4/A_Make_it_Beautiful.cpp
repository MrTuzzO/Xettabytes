#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        map<int, int> arr;
        int mx = INT_MIN, min = INT_MAX;
        for (size_t i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x > mx) mx = x;
            if (x < min) min = x;
            arr[x]++;
        }

        arr[mx]--;
        arr[min]--;

        if (min == mx)
            NO;
        else {
            YES;
            cout << mx << " " << min << " ";
            for (auto it = arr.begin(); it != arr.end(); it++) {
                if (it->second != 0) {
                    for (size_t i = 0; i < it->second; i++) {
                        cout << it->first << " ";
                    }
                }
            }
            cout << endl;
        }
    }

    return 0;
}

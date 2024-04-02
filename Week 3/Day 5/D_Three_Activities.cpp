#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<int> maxThree(vector<ll> v) {
    int max1 = -1, max2 = -1, max3 = -1;

    for (int i = 0; i < v.size(); i++) {
        if (max1 == -1 or v[i] > v[max1]) {
            max3 = max2;
            max2 = max1;
            max1 = i;
        } else if (max2 == -1 or v[i] > v[max2]) {
            max3 = max2;
            max2 = i;
        } else if (max3 == -1 or v[i] > v[max3]) {
            max3 = i;
        }
    }
    vector<int> ans = {max1, max2, max3};
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<ll> a(n), b(n), c(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        for (int i = 0; i < n; i++) cin >> c[i];

        vector<int> bestA = maxThree(a);
        vector<int> bestB = maxThree(b);
        vector<int> bestC = maxThree(c);

        ll sum = 0;
        for (int x : bestA) {
            for (int y : bestB) {
                for (int z : bestC) {
                    if (x != y and y != z and x != z) {
                        sum = max(sum, a[x] + b[y] + c[z]);
                    }
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

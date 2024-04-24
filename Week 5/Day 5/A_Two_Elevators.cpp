#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        int dif1 = a - 1;
        int dif2 = abs(b - c) + c - 1;

        if (dif1 == dif2) {
            cout << "3\n";
        }else if (dif1 < dif2)
            cout << "1\n";
        else
            cout << "2\n";
    }

    return 0;
}
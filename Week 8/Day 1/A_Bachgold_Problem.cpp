#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if (n % 2 == 0) {
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++) cout << "2 ";
        cout << endl;
    } else {
        int rem = n - 3;
        cout << (rem / 2) + 1 << endl;
        for (int i = 0; i < rem / 2; i++) cout << "2 ";
        cout << "3" << endl;
    }
    return 0;
}

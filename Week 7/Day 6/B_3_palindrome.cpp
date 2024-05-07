#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    char ss[4] = {'a', 'a', 'b', 'b'};
    int count = 0;
    for (int i = 0; i < n; i++) {
        cout << ss[count];
        count++;
        if (count == 4) count = 0;
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    map<int, int> events;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        events[a]++;
        events[b + 1]--;
    }

    int mxCustomers = 0;
    int curCustomers = 0;

    for (auto event : events) {
        curCustomers += event.second;
        mxCustomers = max(mxCustomers, curCustomers);
    }
    cout << mxCustomers << endl;
    return 0;
}
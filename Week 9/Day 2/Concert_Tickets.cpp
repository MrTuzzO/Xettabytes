#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    multiset<ll> ticketPrice;

    for (int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ticketPrice.insert(x);
    }

    while (m--) {
        ll x;
        cin >> x;

        auto it = ticketPrice.upper_bound(x);
        if (it != ticketPrice.begin()) {
            it--;
            cout << *it << endl;
            ticketPrice.erase(it);
        } else
            cout << "-1\n";
    }

    return 0;
}

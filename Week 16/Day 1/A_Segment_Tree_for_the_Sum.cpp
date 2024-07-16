#include <bits/stdc++.h>
using namespace std;
#define ll long long int

const int MAXN = 1e5 + 4;
ll arr[MAXN], t[4 * MAXN];

void build(int n, int begin, int end) {
    if (begin == end) {
        t[n] = arr[begin];
        return;
    }
    int mid = (begin + end) / 2, left = 2 * n, right = (2 * n) + 1;
    build(left, begin, mid);
    build(right, mid + 1, end);
    t[n] = t[left] + t[right];
}

void update(int n, int begin, int end, int index, int value) {
    if (index < begin or index > end) return;
    if (begin == end) {
        t[n] = value;
        return;
    }
    int mid = (begin + end) / 2, left = 2 * n, right = (2 * n) + 1;
    update(left, begin, mid, index, value);
    update(right, mid + 1, end, index, value);
    t[n] = t[left] + t[right];
}

ll query(int n, int begin, int end, int l, int r) {
    if (end < l or begin > r) return 0;
    if (l <= begin and r >= end) return t[n];

    int mid = (begin + end) / 2, left = 2 * n, right = (2 * n) + 1;
    return query(left, begin, mid, l, r) + query(right, mid + 1, end, l, r);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++) cin >> arr[i];
    build(1, 1, n);

    while (q--) {
        int t;
        cin >> t;
        if(t==1){
            int index, value;
            cin >> index>> value;
            index++;
            update(1, 1, n, index, value);
        }else{
            int l, r;
            cin >> l >> r;
            l++;
            ll ans = query(1, 1, n, l, r);
            cout << ans << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first < b.first;
}
bool cmp2(pair<int, int> a, pair<int, int> b) {
    if (a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int size = s.size();

        vector<pair<int, int>> v;
        char source = s[0] - '0';
        int src = source - '0';

        char destination = s[size - 1] - '0';
        int dst = destination - '0';

        for (int i = 0; i < size; i++) {
            char c = s[i] - '0';
            int l = c - '0';
            if (l < min(src, dst) or l > max(src, dst)) {
                continue;
            } else
                v.push_back({l, i + 1});
        }

        if (src < dst) {
            sort(v.begin(), v.end(), cmp);
        } else {
            sort(v.begin(), v.end(), cmp2);
        }

        int cost = 0;
        int count = v.size();
        for (int i = 1; i < count; i++) {
            cost = cost + abs(v[i].first - v[i - 1].first);
        }

        cout << cost << " " << v.size() << endl;
        for (int i = 0; i < count; i++) {
            cout << v[i].second << " ";
        }
        cout << endl;
    }
    return 0;
}
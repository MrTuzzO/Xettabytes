#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool cmp(pair<char, int> a, pair<char, int> b) { return a.second < b.second; }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        stack<pair<char, int>> capitalL;
        stack<pair<char, int>> smallL;

        for (int i = 0; i < n; i++) {
            if (s[i] >= 'A' and s[i] <= 'Z') {
                if (s[i] == 'B' and !capitalL.empty()) {
                    capitalL.pop();
                } else if(s[i] != 'B'){
                    capitalL.push({s[i], i});
                }
            } else {
                if (s[i] == 'b' and !smallL.empty()) {
                    smallL.pop();
                } else if(s[i] != 'b'){
                    smallL.push({s[i], i});
                }
            }
        }
        vector<pair<char, int>> ansS;
        while (!capitalL.empty()) {
            auto top = capitalL.top();
            ansS.push_back(top);
            capitalL.pop();
        }
        while (!smallL.empty()) {
            auto top = smallL.top();
            ansS.push_back(top);
            smallL.pop();
        }

        sort(ansS.begin(), ansS.end(), cmp);
        for (auto c : ansS) {
            cout << c.first;
        }
        cout << endl;
    }
    return 0;
}
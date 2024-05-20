#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> freq;
    for (char c : s) freq[c]++;

    int odd_count = 0;
    char odd_char = '\0';
    for (auto it : freq) {
        if (it.second % 2 != 0) {
            odd_count++;
            odd_char = it.first;
        }
    }

    if (odd_count > 1)
        cout << "NO SOLUTION";
    else {
        string ansS, firstHalf;
        for (auto it : freq) {
            if (it.second % 2 == 0) {
                firstHalf += string(it.second / 2, it.first);
            }
        }
        ansS += firstHalf;
        if (odd_char != '\0') {
            ansS += string(freq[odd_char], odd_char);
        }
        reverse(firstHalf.begin(), firstHalf.end());
        ansS += firstHalf;
        cout << ansS;
    }
    return 0;
}
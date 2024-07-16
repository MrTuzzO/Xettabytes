#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define NO cout << "NO\n"
#define YES cout << "YES\n"
// ll lcm(ll a, ll b) { return ((a / __gcd(a, b)) * b); }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    stack<char> st;
    int count = 0;
    for(char c: s){
        if(st.empty() or st.top() != c){
            st.push(c);
        }else if(!st.empty() and st.top() == c){
            count++;
            st.pop();
        }
    }
    if (count % 2) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}
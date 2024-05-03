#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        stack<char> st;
        int count = 0;
        for (int i = 0; i < n; i++) {
            if(!st.empty() and st.top() != s[i]){
                st.pop();
                count++;
            }else{
                st.push(s[i]);
            }
        }
        if (count % 2 == 1) cout << "Zlatan\n";
        else
            cout << "Ramos\n";
    }
    return 0;
}

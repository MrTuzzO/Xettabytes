#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;

        char mainUnitA = a.back();
        char mainUnitB = b.back();

        if (mainUnitA == mainUnitB) {
            if (a.size() == b.size()) {
                cout << "=\n";
            } else if (mainUnitA == 'S' and mainUnitB == 'S') {
                if (a.size() > b.size()) {
                    cout << "<\n";
                } else {
                    cout << ">\n";
                }
            } else if (mainUnitA == 'L' and mainUnitB == 'L') {
                if (a.size() > b.size()) {
                    cout << ">\n";
                } else {
                    cout << "<\n";
                }
            }else{
                if(mainUnitA == 'S'){
                    cout << "<\n";
                }else{
                    cout << ">\n";
                }
            }
        }
    }
    return 0;
}
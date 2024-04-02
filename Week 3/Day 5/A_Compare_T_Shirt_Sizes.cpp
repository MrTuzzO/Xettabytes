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
            } else if (mainUnitA == 'S') {
                if (a.size() > b.size()) {
                    cout << "<\n";
                } else {
                    cout << ">\n";
                }
            } else if (mainUnitA == 'L') {
                if (a.size() > b.size()) {
                    cout << ">\n";
                } else {
                    cout << "<\n";
                }
            }
        } else {
            if ((mainUnitA == 'S' and mainUnitB == 'M') or (mainUnitA == 'S' and mainUnitB == 'L') ) {
                cout << "<\n";
            } else if((mainUnitA == 'M' and mainUnitB == 'L')){
                cout << "<\n";
            }else{
                cout << ">\n";
            }
        }
    }
    return 0;
}

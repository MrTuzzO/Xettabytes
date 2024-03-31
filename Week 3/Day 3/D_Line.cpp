#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        string s;
        cin >> s;
        long long int size = s.length();

        long long int givenSum = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'L') givenSum += i;
            else givenSum += (size - i - 1);
        }

        vector<long long int> chnage;
        for (int i = 0; i < size; i++) {
            if (s[i] == 'L') {
                long long int c = (size - i - 1) - i;
                chnage.push_back(c);
            } else {
                long long int c = i - (size - i - 1);
                chnage.push_back(c);
            }
        }
        sort(chnage.begin(), chnage.end(), greater<long long int>());
        vector<long long int> result;
        long long int currentSum = givenSum;
        for (int k = 1; k <= size; k++) {
            if (chnage[k - 1] > 0) {
                currentSum = currentSum + chnage[k - 1];
            }
            result.push_back(currentSum);
        }
        for (long long int x : result) cout << x << " ";
        cout << '\n';
    }
    return 0;
}
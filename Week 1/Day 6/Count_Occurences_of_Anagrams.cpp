#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
	int search(string pat, string txt) {
	    vector<int> patFre(26);
	    vector<int> txtFre(26);

	    for(char c:pat) patFre[c-97]++;

	    int l = 0, r = 0, n = txt.length(), k = pat.length(), count = 0;
	    while(r < n){
	        txtFre[txt[r]-97]++;
	        if(r-l+1 == k){
	            if(patFre == txtFre) count++;
	            txtFre[txt[l]-97]--;
	            l++;
	            r++;
	        }else{
	            r++;
	        }
	    }
	    return count;
	}
};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
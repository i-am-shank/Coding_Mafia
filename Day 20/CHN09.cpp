#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int counta=0, countb=0;
		for(int i=0; i<s.size(); i++) {
			if(s[i] == 'a') {
				counta++;
			}
			else {
				countb++;
			}
		}
		int ans = min(counta, countb);
		cout << ans << endl;
	}
	return 0;
}
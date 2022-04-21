#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int countD=0, countU=0;
		if(s[0] == 'D') {
			countD++;
		}
		else {
			countU++;
		}
		for(int i=1; i<s.size(); i++) {
			if(s[i] != s[i-1]) {
				if(s[i] == 'D') {
					countD++;
				}
				else {
					countU++;
				}
			}
		}
		int ans = min(countD, countU);
		cout << ans << endl;
	}
	return 0;
}
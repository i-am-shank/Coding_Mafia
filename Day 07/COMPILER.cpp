#include <bits/stdc++.h>
using namespace std;

int count(string s) {
	int count = 0, ans=0;
	for(int i=0; i<s.size(); i++) {
		if(s[i] == '<') {
			count++;
		}
		else {
			count--;
		}
		if(count < 0) {
			break;
		}
		if(count == 0) {
			ans = i+1;
		}
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int ans = count(s);
		if(ans == 0) {
			cout << 0 << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}
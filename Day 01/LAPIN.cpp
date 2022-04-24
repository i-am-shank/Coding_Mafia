#include <bits/stdc++.h>
#include <string>
using namespace std;

bool isLapindrome(string s) {
	int n = s.size();
	int begin[26] = {0}, end[26] = {0};
	if(n % 2 == 0) {
		for(int i=0; i<n/2; i++) {
			begin[s[i] - 'a'] ++;
		}
		for(int i=n/2; i<n; i++) {
			end[s[i] - 'a'] ++;
		}
	}
	else {
		for(int i=0; i<n/2; i++) {
			begin[s[i] - 'a'] ++;
		}
		for(int i=(n/2)+1; i<n; i++) {
			end[s[i] - 'a'] ++;
		}
	}
	bool flag = true;
	for(int i=0; i<26; i++) {
		if(begin[i] != end[i]) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		bool ans = isLapindrome(s);
		cout << (ans == true ? "YES" : "NO") << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

string findString(int k) {
	if(k <= 0) {
		string ans = "a";
		return ans;
	}
	string s = "abcdefghijklmnopqrstuvwxyz";
	string ans = "";
	if(k < 26) {
		for(int i=k; i>=0; i--) {
			ans += s[i];
		}
	}
	if(k>=26 && k<51) {
		int n1 = k%26;
		for(int i=n1+1; i>=0; i--) {
			ans += s[i];
		}
		for(int i=0; i<(k/25)-1; i++) {
			for(int j=25; j>=0; j--) {
				ans += s[j];
			}
		}
	}
	else if(k>=51 && k<76) {
		int n2 = k%51;
		for(int i=n2+1; i>=0; i--) {
			ans += s[i];
		}
		for(int i=0; i<(k/25); i++) {
			for(int j=25; j>=0; j--) {
				ans += s[j];
			}
		}
	}
	else if(k>=76 && k<101) {
		int n3 = k%76;
		for(int i=n3+1; i>=0; i--) {
			ans += s[i];
		}
		for(int i=0; i<(k/25); i++) {
			for(int j=25; j>=0; j--) {
				ans += s[j];
			}
		}
	}
	return ans;
}

int main () {
	int t;
	cin >> t;
	while(t--) {
		int k;
		cin >> k;
		string s = findString(k);
		cout << s << endl;
	}
	return 0;
}
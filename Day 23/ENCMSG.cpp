#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		string s;
		cin >> n >> s;
		for(int i=0; i<n-1; i+=2) {
			char temp = s[i];
			s[i] = s[i+1];
			s[i+1] = temp;
		}
		for(int i=0; i<n; i++) {
			char c = 'z' - (s[i] - 'a');
			s[i] = c;
		}
		cout << s << endl;
	}
	return 0;
}
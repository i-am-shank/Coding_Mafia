#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int holes = 0;
		for(int i=0; i<s.size(); i++) {
			if(s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'R') {
				holes += 1;
			}
			else if(s[i] == 'B') {
				holes += 2;
			}
			else {
				continue;
			}
		}
		cout << holes << endl;
	}
	return 0;
}
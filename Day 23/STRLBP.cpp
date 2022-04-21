#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int count = 0;
		for(int i=1; i<8; i++) {
			if(s[i] != s[i-1]) {
				count ++;
			}
		}
		if(s[0] != s[7]) {
			count ++;
		}
		if(count <= 2) {
			cout << "uniform" << endl;
		}
		else {
			cout << "non-uniform" << endl;
		}
	}
	return 0;
}
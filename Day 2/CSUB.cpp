#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		long n, count=0;
		cin >> n;
		string s;
		cin >> s;
		for(int i=0; i<n; i++) {
			if(s[i] == '1') {
				count++;
			}
		}
		cout << (count*(count + 1)) / 2 << endl;
	}
	return 0;
}
// Problem 137

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, count = 0;
		cin >> n;
		string s;
		cin >> s;
		for(int i=0; i<n; i++) {
			if(s[i] == '1'  ||  (i!=0 && s[i-1]=='1')  ||  (i!=(n-1) && s[i+1] == '1')) {
				continue;
			}
			else {
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
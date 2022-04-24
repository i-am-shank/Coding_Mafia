#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int sum = 0;
		for(int i=0; i<s.size(); i++) {
			int val = (int)s[i];
			if(val>=48  &&  val<=57) {
				sum += s[i]-'0';
			}
		}
		cout << sum << endl;
	}
	return 0;
}
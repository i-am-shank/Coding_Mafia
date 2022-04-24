#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string j, s;
		cin >> j >> s;
		int num = 0;
		for(int i=0; i<s.size(); i++) {
			for(int k=0; k<j.size(); k++) {
				if(s[i] == j[k]) {
					num ++;
					break;
				}
			}
		}
		cout << num << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int l;
		cin >> l;
		string s;
		cin >> s;
		int count = 0;
		bool flag = true;
		for(int i=0; i<l; i++) {
			char c = s[i];
			if(c == 'H') {
				count++;
			}
			else if(c == 'T') {
				count--;
			}
			if(count<0 || count>1) {
				flag = false;
				break;
			}
		}
		if(flag == true  &&  count == 0) {
			cout << "Valid" << endl;
		}
		else {
			cout << "Invalid" << endl;
		}
	}
	return 0;
}
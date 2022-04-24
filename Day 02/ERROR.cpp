#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		bool flag = true;
		for(int i=1; i<s.size()-1; i++) {
			if(s[i]!=s[i-1]  &&  s[i]!=s[i+1]) {
				flag = false;
				break;
			}
		}
		cout << (flag == false ? "Good" : "Bad") << endl;
	}
	return 0;
}
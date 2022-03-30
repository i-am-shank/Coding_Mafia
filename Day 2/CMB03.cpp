#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a, b;
		cin >> a >> b;
		int n = a.size();
		int m = b.size();
		bool flag = false;
		for(int i=0; i<(n-m)+1; i++) {
			string c = a.substr(i, m);
			if(c == b) {
				flag = true;
				break;
			}
		}
		cout << (flag == true ? "1" : "0") << endl;
	}
	return 0;
}
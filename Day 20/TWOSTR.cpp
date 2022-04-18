#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string x, y;
		cin >> x >> y;
		bool flag;
		if(x.size() == y.size()) {
			for(int i=0; i<x.size(); i++) {
				if(x[i]=='?' || y[i]=='?' || x[i]==y[i]) {
					flag = true;
				}
				else {
					flag = false;
					break;
				}
			}
		}
		else {
			flag = false;
		}
		cout << (flag==true ? "Yes" : "No") << endl;
	}
	return 0;
}
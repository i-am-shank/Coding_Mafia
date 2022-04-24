#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int x = 0;
		while((n-(4*x)) % 7 != 0  &&  (n-(4*x)) >= 0) {
			x ++;
		}
		if((n-(4*x)) < 0) {
			cout << -1 << endl;
		}
		else {
			cout << (n-(4*x)) << endl;
		}
	}
	return 0;
}
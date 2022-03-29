#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, c;
		int ans;
		cin >> a >> b >> c;
		if(a>=b && a>=c) {
			if(b>=c) {
				ans = b;
			}
			else {
				ans = c;
			}
		}
		else if(b>=a && b>=c) {
			if(a>=c) {
				ans = a;
			}
			else {
				ans = c;
			}
		}
		else {
			if(a>=b) {
				ans = a;
			}
			else {
				ans = b;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
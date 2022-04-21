#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, y, ans;
		cin >> x >> y;
		if(x <= y) {
			ans = 0;
		}
		else {
			ans = x-y;
		}
		cout << ans << endl;
	}
	return 0;
}
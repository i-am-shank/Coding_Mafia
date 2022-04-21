#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin >> tc;
	while(tc--) {
		int n, k;
		cin >> n >> k;
		int ans = 0;
		for(int i=0; i<n; i++) {
			int t, d;
			cin >> t >> d;
			if(k > 0) {
				if(k >= t) {
					k -= t;
				}
				else {
					t -= k;
					k = 0;
					ans += (t * d);
				}
			}
			else {
				ans += (t * d);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
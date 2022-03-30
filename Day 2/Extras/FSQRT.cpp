#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int start = 1, end = n, ans = 1;
		while(start <= end) {
			int mid = (start+end) / 2;
			if(mid*mid == n) {
				ans = mid;
				break;
			}
			else if(mid*mid > n) {
				end = mid-1;
			}
			else {
				ans = mid;
				start = mid+1;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		string ans = "";
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			if(ele <= k) {
				k -= ele;
				ans += "1";
			}
			else {
				ans += "0";
			}
		}
		cout << ans << endl;
	}
	return 0;
}
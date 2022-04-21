#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		vector<int> v;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			v.push_back(ele);
		}
		sort(v.begin(), v.end());
		int ans = v[((n+k)-1) / 2];
		cout << ans << endl;
	}
	return 0;
}
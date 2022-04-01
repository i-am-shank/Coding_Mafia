#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n;
	float b[n];
	for(int i=0; i<n; i++) {
		cin >> b[i];
	}
	cin >> q;
	while(q--) {
		float ans = 0;
		int l, r;
		cin >> l >> r;
		vector<int> burnt, unburnt;
		float minBurn=(float)INT_MAX, maxBurn=(float)INT_MIN;
		float minUnburn=(float)INT_MAX , maxUnburn=(float)INT_MIN;
		for(int i=0; i<n; i++) {
			if(b[i]>l || b[i]<=r) {
				burnt.push_back(b[i]);
				minBurn = min(minBurn, b[i]);
				maxBurn = max(maxBurn, b[i]);
			}
			else {
				unburnt.push_back(b[i]);
				minUnburn = min(minUnburn, b[i]);
				maxUnburn = max(maxUnburn, b[i]);
			}
		}
		ans += (minBurn + max(((maxBurn-minBurn)/2) , maxUnburn));
		cout << ans << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int weights[n];
		for(int i=0; i<n; i++) {
			cin >> weights[i];
		}
		sort(weights, weights+n);
		int childSum = 0, dadSum = 0;
		if(k <= n/2) {
			for(int i=0; i<k; i++) {
				childSum += weights[i];
			}
			for(int i=k; i<n; i++) {
				dadSum += weights[i];
			}
		}
		else {
			for(int i=0; i<n-k; i++) {
				childSum += weights[i];
			}
			for(int i=n-k; i<n; i++) {
				dadSum += weights[i];
			}
		}
		cout << abs(dadSum - childSum) << endl;
	}
	return 0;
}
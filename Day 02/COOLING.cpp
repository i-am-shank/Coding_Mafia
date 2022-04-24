#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int weights[n];
		for(int i=0; i<n; i++) {
			cin >> weights[i];
		}
		int limits[n];
		for(int i=0; i<n; i++) {
			cin >> limits[i];
		}
		sort(weights, weights+n);
		sort(limits, limits+n);
		int i=0, j=0, count=0;
		while(i<n && j<n) {
			if(weights[i] <= limits[j]) {
				count++;
				i++;
				j++;
			}
			else {
				j++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
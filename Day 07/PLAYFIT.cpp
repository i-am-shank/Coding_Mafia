#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		int maxDiff = 0, minV = arr[0];
		for(int i=1; i<n; i++) {
			int diff = arr[i] - minV;
			maxDiff = max(maxDiff, diff);
			minV = min(minV, arr[i]);
		}
		if(maxDiff == 0) {
			cout << "UNFIT" << endl;
		}
		else {
			cout << maxDiff << endl;
		}
		delete []arr;
	}
	return 0;
}
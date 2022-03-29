#include <bits/stdc++.h>
#include <algorithm>
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
		sort(arr, arr+n);
		int minDiff = INT_MAX;
		for(int i=1; i<n; i++) {
			if(arr[i] - arr[i-1] < minDiff) {
				minDiff = arr[i] - arr[i-1];
			}
		}
		cout << minDiff << endl;
		delete []arr;
	}
	return 0;
}
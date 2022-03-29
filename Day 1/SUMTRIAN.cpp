#include <bits/stdc++.h>
using namespace std;

int maxSum(int **arr, int n) {
	for(int i=n-2; i>=0; i--) {
		for(int j=0; j<=i; j++) {
			arr[i][j] = arr[i][j] + max(arr[i+1][j], arr[i+1][j+1]);
		}
	}
	return arr[0][0];
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int **arr = new int* [n];
		for(int i=0; i<n; i++) {
			arr[i] = new int[i+1];
			for(int j=0; j<=i; j++) {
				cin >> arr[i][j];
			}
		}
		int ans = maxSum(arr, n);
		cout << ans << endl;
		for(int i=0; i<n; i++) {
			delete []arr[i];
		}
		delete []arr;
	}
	return 0;
}
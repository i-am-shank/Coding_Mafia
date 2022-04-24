#include <bits/stdc++.h>
using namespace std;

int price(int *arr, int n) {
	if(n <= 2) {
		int sum = 0;
		for(int i=0; i<n; i++) {
			sum += arr[i];
		}
		return sum;
	}
	if(n <= 4) {
		return arr[n-1]+arr[n-2];
	}
	int smallAns = price(arr, n-4);
	return (smallAns + arr[n-1] + arr[n-2]);
}

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
		int ans = price(arr, n);
		cout << ans << endl;
	}
	return 0;
}
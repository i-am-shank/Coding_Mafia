#include <bits/stdc++.h>
using namespace std;

int localI(int *arr, int n) {
	int ans = 0;
	for(int i=0; i<n-1; i++) {
		if(arr[i] > arr[i+1]) {
			ans ++;
		}
	}
	return ans;
}

int pairI(int *arr, int n) {
	int ans = 0;
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			if(arr[i] > arr[j]) {
				ans ++;
			}
		}
	}
	return ans;
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
		int local = localI(arr, n);
		int pair = pairI(arr, n);
		if(local == pair) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
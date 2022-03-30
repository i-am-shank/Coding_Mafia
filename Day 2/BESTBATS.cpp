#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
	int ans = 1;
	for(int i=2; i<=n; i++) {
		ans *= i;
	}
	return ans;
}

int C(int n, int r) {
	return fact(n) / (fact(r)*fact(n-r));
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[11], k, sum = 0;
		for(int i=0; i<11; i++) {
			cin >> arr[i];
		}
		cin >> k;
		sort(arr, arr+11);
		for(int i=11-k; i<11; i++) {
			sum += arr[i];
		}
		int low = arr[11-k], lowCount=0, lowTaken=0;
		for(int i=0; i<11; i++) {
			if(arr[i] == low) {
				lowCount++;
				if(i >= 11-k) {
					lowTaken++;
				}
			}
		}
		int ans = C(lowCount, lowTaken);
		cout << ans << endl;
	}
	return 0;
}
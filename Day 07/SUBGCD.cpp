#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b > a) {
		return gcd(b, a);
	}
	if(b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		int ans = 0;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			ans = gcd(ans, arr[i]);
		}
		if(ans == 1) {
			cout << n << endl;
		}
		else {
			cout << -1 << endl;
		}
		delete []arr;
	}
	return 0;
}
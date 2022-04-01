#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {  // Euler's algorithm
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
		int n, q;
		cin >> n >> q;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		int fwd_gcd[n+1], bwd_gcd[n+2];
		fwd_gcd[0] = bwd_gcd[n+1] = 0;
		for(int i=1; i<=n; i++) {
			fwd_gcd[i] = gcd(fwd_gcd[i-1], arr[i-1]);
		}
		for(int i=n; i>=1; i--) {
			bwd_gcd[i] = gcd(bwd_gcd[i+1], arr[i-1]);
		}
		while(q--) {
			int l, r;
			cin >> l >> r;
			int ans = gcd(fwd_gcd[l-1], bwd_gcd[r+1]);
			cout << ans << endl;
		}
		delete []arr;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m) {
	if(m > n) {
		return gcd(m, n);
	}
	if(m == 0) {
		return n;
	}
	return gcd(m, n % m);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int g = gcd(n, m);
		int ans = (n/g) * (m/g);
		cout << ans << endl;
	}
	return 0;
}
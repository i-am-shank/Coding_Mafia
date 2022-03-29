#include <bits/stdc++.h>
using namespace std;

int sumN(int n) {
	return ((n* (n+1)) / 2);
}

int sum(int d, int n) {
	if(d == 1) {
		return sumN(n);
	}
	return sum(d-1, sumN(n));
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int d, n;
		cin >> d >> n;
		int ans = sum(d, n);
		cout << ans << endl;
	}
	return 0;
}
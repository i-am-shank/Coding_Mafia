#include <bits/stdc++.h>
using namespace std;

int numZeros(int n) {
	int num = 0;
	for(int i=5; i<=n; i*=5) {
		num += (n/i);
	}
	return num;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int ans = numZeros(n);
		cout << ans << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll power(int m, int n) {
	ll ans = 1;
	while(n > 0) {
		if(n % 2 != 0) {
			ans *= m;
		}
		m = m * m;
		n /= 2;
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int m, n;
		cin >> m >> n;
		ll ans = power(m, n);
		cout << ans << endl;
	}
	return 0;
}
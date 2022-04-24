#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll factorial(int n) {
	int ans = 1;
	for(int i=1; i<=n; i++) {
		ans *= i;
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll ans = factorial(n);
		cout << ans << endl;
	}
	return 0;
}
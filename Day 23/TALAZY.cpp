#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n, b, m;
		cin >> n >> b >> m;
		ll ans = 0;
		while(n > 0) {
			ll solve = (n+1)/2;  // For even.. equivalent to n/2.
			n -= solve;
			ans += (solve * m);
			ans += b;
			m *= 2;
		}
		ans -= b;  // excluding the break at last
		cout << ans << endl;
	}
	return 0;
}
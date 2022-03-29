#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll C(int n, int r) {
	if(r > n/2) {
		r = n-r;
	}
	ll ans = 1;
	for(int i=0; i<r; i++) {
		ans *= n;
		n--;
		ans /= (i+1);
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		// Divide n into k sets .. such that each set has atleast 1 marble.
		//  =>  Non-zero solutions of   x + y + z = n   =>   All solutions of x + y + z = (n-3)
		// Arrange (n-3) marbles & (3-1) dividers.. (n-3)! / ((3-1)!.(n-3 - 3+1)!) = (n-1)C(n-k)
		ll ans = C(n-1, n-k);
		cout << ans << endl;
	}
	return 0;
}
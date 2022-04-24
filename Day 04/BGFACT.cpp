#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	ll n = pow(10, 5);
	ll arr[n+1];
	arr[0] = 1, arr[1] = 1;
	for(int i=2; i<=n; i++) {
		arr[i] = arr[i-1] * i;
	}
	while(t--) {
		ll n;
		cin >> n;
		ll ans = arr[n];
		ll mod = 1000000007;
		cout << ans % mod << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll ans = (n) + ((n*(n+1))/2);
		cout << ans << endl;
	}
	return 0;
}
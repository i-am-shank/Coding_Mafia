#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll a, b, n, ans;
		cin >> a >> b >> n;
		if(n % 6 == 1) {
			ans = a;
		}
		else if(n % 6 == 2) {
			ans = b;
		}
		else if(n % 6 == 3) {
			ans = b - a;
		}
		else if(n % 6 == 4) {
			ans = -a;
		}
		else if(n % 6 == 5) {
			ans = -b;
		}
		else {
			ans = a-b;
		}
		ll modV = pow(10, 9) + 7;
		if(ans >= 0) {
			cout << (ans % modV) << endl;
		}
		else {
			cout << (ans % modV) + modV << endl;
		}
	}
	return 0;
}
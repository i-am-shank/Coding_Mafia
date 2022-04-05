#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

typedef long long ll;

int main() {
	ll n, m;
	cin >> n >> m;
	while(m --) {
		ll q, ans;
		cin >> q;
		if(q >= n+2  &&  q<=(3*n)) {
			if(q <= (2*n)+1) {
				ans = (q-n) - 1;
			}
			else {
				ans = ((3*n)-q) + 1;
			}
		}
		else {
			ans = 0;
		}
		cout << ans << endl;
	}
	return 0;
}
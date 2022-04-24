#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

typedef long long ll;
unordered_map <ll,ll> ourmap;

ll value(ll n) {
	if(n <= 11) {
		return n;
	}
	if(ourmap.find(n) != ourmap.end()) {
		return ourmap[n];
	}
	else {
		ll n1 = value(n/2);
		ll n2 = value(n/3);
		ll n3 = value(n/4);
		ourmap[n] = n1 + n2 + n3;
	}
	return ourmap[n];
}

int main() {
	ll n;
	while(cin >> n) {
		ourmap.clear();
		ll ans = value(n);
		cout << ans << endl;
	}
	return 0;
}
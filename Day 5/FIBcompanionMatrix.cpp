#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
void multiplyMatrix(ll a[2][2], ll b[2][2]) {
	ll ans[2][2];
	for(ll i=0; i<2; i++) {
		for(ll j=0; j<2; j++) {
			ll x = 0;
			for(ll k=0; k<2; k++) {
				x += a[i][k] * b[k][j];
			}
			ans[i][j] = x;
		}
	}
	for(ll i=0; i<2; i++) {
		for(ll j=0; j<2; j++) {
			a[i][j] = ans[i][j];
		}
	}
	return;
}

void powerMatrix(ll a[2][2], ll n){
	ll ans[2][2] = {{1,0} , {0,1}};
	while(n > 0) {
		if(n % 2 == 1) {
			multiplyMatrix(ans, a);
		}
		multiplyMatrix(a, a);
		n /= 2;
	}
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			a[i][j] = ans[i][j];
		}
	} 
	return;
}

ll fib(ll n) {
	ll a[2][2] = {{1,1} , {1,0}};
	powerMatrix(a, n-1);
	ll ans = a[0][0];
	return ans;
}

ll gcd(ll a, ll b) {
	if(b > a) {
		return gcd(b, a);
	}
	if(b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	ll t;
	cin >> t;
	while(t--) {
		ll a, b;
		cin >> a >> b;
		ll n = gcd(a, b);
		ll mod = 1000000007;
		ll ans = fib(n) % mod;
		cout << ans << endl;
	}
	return 0;
}
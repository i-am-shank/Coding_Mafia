#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n;
	cin >> n;
	vector<ll> a;
	for(int i=0; i<n; i++) {
		ll ele;
		cin >> ele;
		a.push_back(ele);
	}
	ll ans = 0, maxV=a[0];
	for(int i=1; i<n; i++) {
		if(a[i] < maxV) {
			for(int j=0; j<i; j++) {
				if(a[j] > a[i]) {
					ans ++;
				}
			}
		}
		else {
			maxV = a[i];
		}
	}
	cout << ans << endl;
	return 0;
}
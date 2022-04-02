#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	int t;
	cin >> t;
	ll arr[1000001];
	ll mod = pow(10,9) + 7;
	arr[0] = 0;
	arr[1] = 1;
	for(int i=2; i<1000000; i++) {
		arr[i] = (arr[i-1] + arr[i-2])  %  mod;
	}
	while(t--) {
		int a, b, r;
		cin >> a >> b >> r;
		ll ans = ((b*arr[r-1]) + (a*arr[r-2]))  %  mod;
		if(r == 1) {
			cout << a << endl;
		}
		else if(r == 2) {
			cout << b << endl;
		}
		else {
			cout << ans << endl;
		}
	}
	return 0;
}
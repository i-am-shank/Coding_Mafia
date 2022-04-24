#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n, k;
		cin >> n >> k;
		if(k > 0) {
			ll count1 = n/k, count2 = n-(k*(n/k));
			cout << count1 << " " << count2 << endl;
		}
		else {
			cout << 0 << endl;
		}
	}
	return 0;
}
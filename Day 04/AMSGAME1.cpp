#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b > a) {
		return gcd(b, a);
	}
	if(b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, ans = 0;
		cin >> n;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			ans = gcd(ans, ele);
		}
		cout << ans << endl;
	}
	return 0;
}
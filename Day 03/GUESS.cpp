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
		int n, m;
		cin >> n >> m;
		if((m%2 != 0)  &&  (n%2 != 0)) {
			cout << (m*n)/2 << "/" << (m*n) << endl;
		}
		else {
			cout << "1/2" << endl;
		}
	}
	return 0;
}
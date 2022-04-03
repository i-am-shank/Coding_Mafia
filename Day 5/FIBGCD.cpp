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
	long long fib[1000001];
	fib[0] = 1;
	fib[1] = 1;
	for(int i=2; i<1000001; i++) {
		fib[i] = fib[i-1] + fib[i-2];
	}
	while(t--) {
		int a, b;
		cin >> a >> b;
		int n = gcd(a, b);
		cout << fib[n-1] << endl;
	}
	return 0;
}
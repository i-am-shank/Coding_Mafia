#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if(n==0 || n==1) {
		return false;
	}
	for(int i=2; i*i<=n; i++) {
		if(n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> m >> n;
		for(int i=m; i<=n; i++) {
			if(isPrime(i)) {
				cout << i << endl;
			}
		}
		cout << endl;
	}
	return 0;
}
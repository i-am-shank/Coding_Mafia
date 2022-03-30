#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {  // Sieve of Ethranos
	bool flag[n+1];
	for(int i=2; i<n+1; i++) {
		flag[i] = true;
	}
	flag[0] = false;
	flag[1] = false;
	for(int i=2; i*i<=n; i++) {
		if(flag[i] == true) {
			for(int j=i*i; j<=n; j+=i) {
				flag[j] = false;
			}
		}
	}
	return flag[n];
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		int num;
		cin >> num;
		bool ans = isPrime(num);
		cout << (ans == true ? "PRIME" : "NOT PRIME") << endl;
	}
	return 0;
}
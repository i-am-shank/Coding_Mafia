#include <bits/stdc++.h>
using namespace std;

int D(int n) {
	int tempSum = 0;
	while(n > 0) {
		int digit = n % 10;
		if(digit % 2 == 0) {
			tempSum += (2*digit);
		}
		else {
			tempSum += digit;
		}
		n /= 10;
	}
	int dV = tempSum % 10;
	return dV;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int sum = 0;
		for(int i=a; i<=b; i++) {
			sum += D(i);
		}
		cout << sum << endl;
	}
	return 0;
}
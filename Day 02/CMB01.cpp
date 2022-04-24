#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
	int rev = 0;
	while(n != 0) {
		int digit = n % 10;
		rev = (rev * 10) + digit;
		n /= 10;
	}
	return rev;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int ra = reverse(a), rb = reverse(b);
		int rsum = ra + rb;
		int sum = reverse(rsum);
		cout << sum << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int reverse(int n) {
	int ans = 0;
	while(n > 0) {
		int digit = n % 10;
		ans = (ans*10) + digit;
		n /= 10;
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int rev = reverse(n);
		if(rev == n) {
			cout << "wins" << endl;
		}
		else {
			cout << "loses" << endl;
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
	int temp = n, rev = 0;
	while(temp != 0) {
		int digit = temp % 10;
		rev = (rev * 10) + digit;
		temp /= 10;
	}
	if(rev == n) {
		return true;
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int l, r;
		cin >> l >> r;
		int sum = 0;
		for(int i=l; i<=r; i++) {
			if(isPalindrome(i)) {
				sum += i;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
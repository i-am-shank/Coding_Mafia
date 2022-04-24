#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
	int rev = 0, temp = n;
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

bool isPrime(int n) {
	bool flag = true;
	for(int i=2; i*i<=n; i++) {
		if(n % i == 0) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main() {
	int n;
	cin >> n;
	while(!isPalindrome(n) || !isPrime(n)) {
		n++;
	}
	cout << n << endl;
	return 0;
}
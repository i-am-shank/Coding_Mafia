#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
	int rev = 0, temp = n;
	while(temp != 0) {
		int digit = temp % 10;
		rev = (rev * 10) + digit;
		temp /= 10;
	}
	return rev == n;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		while(!isPalindrome(n+1)){
			n++;
		}
		cout << n+1 << endl;
	}
	return 0;
}
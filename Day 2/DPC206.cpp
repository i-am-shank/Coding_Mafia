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

pair<int, int> Palindrome(int n, int c) {
	int rev = reverse(n);
	if(rev == n) {
		pair<int, int> ans;
		ans.first = c;
		ans.second = n;
		return ans;
	}
	int new_n = n + rev;
	pair<int, int> bigAns = Palindrome(new_n, c+1);
	return bigAns;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		pair<int, int> ans = Palindrome(n, 0);
		cout << ans.first << " " << ans.second << endl;
	}
	return 0;
}
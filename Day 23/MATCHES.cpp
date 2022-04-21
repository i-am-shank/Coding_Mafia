#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int digitCount[10] = {6,2,5,5,4,5,6,3,7,6};
	while(t--) {
		int a, b;
		cin >> a >> b;
		int sum = a+b, ans = 0;
		while(sum != 0) {
			int digit = sum % 10;
			ans += digitCount[digit];
			sum /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}
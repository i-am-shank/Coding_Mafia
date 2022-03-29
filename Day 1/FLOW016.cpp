#include <bits/stdc++.h>
using namespace std;

int calculate_gcd(int a, int b) {
	if(b > a) {
		return calculate_gcd(b, a);
	}
	if(b == 0) {
		return a;
	}
	return calculate_gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int gcd = calculate_gcd(a, b);
		int lcm = (a * b) / gcd;
		cout << gcd << " " << lcm << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if(b > a) {
		return gcd(b, a);
	}
	if(b == 0) {
		return a;
	}
	return gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a;
		string b;
		cin >> a >> b;
		if(a == 0) {
			cout << b << endl;
		}
		else {
			int b_new = 0;
			for(int i=0; i<b.size(); i++) {
				b_new = ((b_new*10) + (b[i]-'0')) % a;  // as gcd(a,b) = gcd(b,a%b), so doing %
			}
			cout << gcd(a, b_new) << endl;
		}
	}
	return 0;
}
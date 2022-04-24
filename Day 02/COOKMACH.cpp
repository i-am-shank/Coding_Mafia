#include <bits/stdc++.h>
using namespace std;

bool isPower2(int n) {
	int i=0;
	while(pow(2,i) < n) {
		i++;
	}
	if(pow(2,i) == n) {
		return true;
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, steps = 0;
		cin >> a >> b;
		while(b % a != 0) {
			a /= 2;
			steps ++;
		}
		while(a != b) {
			a *= 2;
			steps++;
		}
		cout << steps << endl;
	}
	return 0;
}
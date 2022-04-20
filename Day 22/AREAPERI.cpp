#include <bits/stdc++.h>
using namespace std;

int main() {
	int l, b;
	cin >> l >> b;
	int a = (l*b), p = (2*(l+b));
	if(a > p) {
		cout << "Area" << endl << a << endl;
	}
	else if(a < p) {
		cout << "Peri" << endl << p << endl;
	}
	else {
		cout << "Eq" << endl << a << endl;
	}
	return 0;
}
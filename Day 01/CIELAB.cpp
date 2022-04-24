#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int rem = a - b;
	if(rem % 10 == 9) {
		cout << (rem - 1) << endl;
	}
	else {
		cout << (rem + 1) << endl;
	}
	return 0;
}
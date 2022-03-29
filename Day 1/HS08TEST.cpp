#include <bits/stdc++.h>
using namespace std;

int main() {
	float x, y;
	cin >> x >> y;
	if((int)x % 5 == 0) {
		if(x + 0.5  <=  y) {
			float balance = y - (x + 0.5);
			cout << fixed << setprecision(2) << balance << endl;
		}
		else {
			cout << fixed << setprecision(2) << y << endl;
		}
	}
	else {
		cout << fixed << setprecision(2) << y << endl;
	}
	return 0;
}
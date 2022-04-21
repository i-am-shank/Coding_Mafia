#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b;
	cin >> a >> b;
	char c;
	cin >> c;
	double ans;
	switch(c) {
		case '+':
			ans = (a+b);
			break;
		case '-':
			ans = (a-b);
			break;
		case '*':
			ans = (a*b);
			break;
		case '/':
			ans = (a/b);
			break;
	}
	cout << fixed << setprecision(6) << ans << endl;
	return 0;
}
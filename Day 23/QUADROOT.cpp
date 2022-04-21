#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;
	double D = sqrt((b*b) - (4*a*c));
	double root1 = (((-1)*b) + D)  /  (2*a);
	double root2 = (((-1)*b) - D)  /  (2*a);
	cout << fixed << setprecision(6) << root1 << endl << root2 << endl;
	return 0;
}
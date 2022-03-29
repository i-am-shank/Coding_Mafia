#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		float q, p;
		cin >> q >> p;
		float e = (q * p);
		if(q > 1000) {
			e *= (0.9);
		}
		cout << fixed << setprecision(6) << e << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int b, ls;
		cin >> b >> ls;
		double rsMax = sqrt(pow(ls,2) + pow(b,2));
		double rsMin = sqrt(pow(ls,2) - pow(b,2));
		cout << fixed << setprecision(4) << rsMin << " " << rsMax << endl;
	}
	return 0;
}
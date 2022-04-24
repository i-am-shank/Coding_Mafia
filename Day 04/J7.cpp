#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		float p, s;
		cin >> p >> s;
		double value1 = p/12;
		double value2 = sqrt(s/6);
		double minV = min(value1, value2), ans;
		if(minV == value1) {
			ans = value1*value1*value1;
		}
		else {
			ans = value2*value2*value2;
		}
		cout << fixed << setprecision(2) << ans << endl;
	}
	return 0;
}
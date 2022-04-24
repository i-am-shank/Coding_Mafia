#include <bits/stdc++.h>
using namespace std;

double gross(int salary) {
	double hra, da;
	if(salary < 1500) {
		hra = (0.1) * (salary);
		da = (0.9) * (salary);
	}
	else {
		hra = 500;
		da = (0.98) * (salary);
	}
	double ans = salary + hra + da;
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int salary;
		cin >> salary;
		double ans = gross(salary);
		cout << fixed << setprecision(2) << ans << endl;
	}
	return 0;
}
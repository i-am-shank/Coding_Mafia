#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *salary = new int[n];
		int minSalary = INT_MAX, sum = 0;
		for(int i=0; i<n; i++) {
			cin >> salary[i];
			sum += salary[i];
			minSalary = min(minSalary, salary[i]);
		}
		int ans = (sum - (minSalary * n));
		cout << ans << endl;
	}
	return 0;
}
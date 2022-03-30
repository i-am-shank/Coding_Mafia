#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int factor = 1;
		for(int i=1; i*i<=n; i++) {
			if(n % i == 0) {
				factor = i;
			}
		}
		int factor2 = n / factor;
		cout << abs(factor - factor2) << endl;
	}
	return 0;
}
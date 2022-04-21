#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, sum =0;
		cin >> n;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			sum += ele;
		}
		if(sum % 2 == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
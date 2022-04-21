#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, sum =0;
		cin >> n >> k;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			sum += ele;
		}
		if(k > 1) {
			cout << "even" << endl;
		}
		else {
			if(sum % 2 == 0) {
				cout << "odd" << endl;
			}
			else {
				cout << "even" << endl;
			}
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int rem = n % 4;
		if(rem==0 || rem==3 || rem==2) {
			cout << "BOB" << endl;
		}
		else {
			cout << "ALICE" << endl;
		}
	}
	return 0;
}
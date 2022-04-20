#include <bits/stdc++.h>
using namespace std;

int main() {
	// We have to find the xor of required permutation of 1 to n.
	// XOR(^)  :  is a sequence independent operation
	// So all permutations have same xor value
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		for(int i=0; i<n; i++) {
			int x, y;
			cin >> x >> y;
		}
		int ans = 1;
		for(int i=2; i<=n; i++) {
			ans = ans ^ i;
		}
		cout << ans << endl;
	}
	return 0;
}
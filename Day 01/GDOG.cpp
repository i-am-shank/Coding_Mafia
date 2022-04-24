#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n,k;
		cin >> n >> k;
		int maxV = 0;
		for(int i=1; i<=k; i++) {
		    maxV = max(maxV, n % i);
		}
		cout << maxV << endl;
	}
	return 0;
}
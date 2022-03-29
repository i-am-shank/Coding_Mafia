#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		int minV = max(a, b);
		int maxV = a + b;
		cout << minV << " " << maxV << endl;
	}
	return 0;
}
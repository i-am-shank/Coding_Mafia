#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, i=0;
		cin >> n;
		while((int)pow(2,i) <= n) {
			i++;
		}
		int ans = pow(2, i-1);
		cout << ans << endl;
	}
	return 0;
}
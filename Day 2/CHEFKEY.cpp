#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, c;
		cin >> n >> m >> c;
		for(int i=1; i<=n; i++) {
			int q = c / i;
			if(q>=1 && q<=m && q*i==c) {
				count ++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
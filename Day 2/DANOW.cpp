#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q;
	cin >> n >> q;
	int *a = new int[n];
	for(int i=0; i<n; i++) {
		cin >> a[i];
	}
	int *b = new int[n];
	for(int i=0; i<n; i++) {
		cin >> b[i];
	}
	for(int i=0; i<q; i++) {
		int ans = 0;
		int l, r;
		cin >> l >> r;
		for(int j=l-1; j<r; j++) {
			ans += (a[j] * b[j]);
		}
		cout << ans << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n;
		int *a = new int[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		cin >> m;
		int *b = new int[m];
		for(int i=0; i<m; i++) {
			cin >> b[i];
		}
		int j=0;
		for(int i=0; i<n; i++) {
			if(j >= m) {
				break;
			}
			if(a[i] == b[j]) {
				j++;
			}
		}
		if(j >= m) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}
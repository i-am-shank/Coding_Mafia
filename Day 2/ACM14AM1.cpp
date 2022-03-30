#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, p;
		cin >> n >> p;
		int *a = new int[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		int count = 0;
		for(int i=0; i<n; i++) {
			if(a[i] >= p) {
				count ++;
			}
			else {
				break;
			}
		}
		cout << count << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		int even = 0;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			if(ele % 2 == 0) {
				even++;
			}
		}
		if(k==0 && even==k) {
			cout << "NO" << endl;
		}
		else if(even >= k) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}
	return 0;
}
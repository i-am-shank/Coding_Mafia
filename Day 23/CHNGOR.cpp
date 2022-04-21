#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		// As all are positive non-zero integers
		// So,    a | b  <=  a + b      ..     Best solution will always be OR of all elements
		int ans = 0;   //  0 | a  =  a    ..    thatswhy initialising with 1.
		for(int i=0; i<n; i++) {
			ans = ans | arr[i];
		}
		cout << ans << endl;
		delete []arr;
	}
}
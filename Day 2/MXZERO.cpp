#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, count1 = 0, count0 = 0;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			if(arr[i] == 1) {
				count1++;
			}
			else {
				count0++;
			}
		}
		if(count1 % 2 == 0) {
			cout << count0 << endl;
		}
		else {
			cout << count1 << endl;
		}
	}
	return 0;
}
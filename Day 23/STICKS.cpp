#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		int max=INT_MIN, secMax=INT_MIN, count=0;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+n, greater<int>());
		for(int i=0; i<n-1; i++) {
			if(arr[i] == arr[i+1]) {
				if(count == 0) {
					max = arr[i];
					i++;
					count ++;
				}
				else if(count == 1) {
					secMax = arr[i];
					count++;
					break;
				}
			}
		}
		if(count == 2) {
			cout << (max*secMax) << endl;
		}
		else {
			cout << -1 << endl;
		}
	}
	return 0;
}
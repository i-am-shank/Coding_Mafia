#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n], minV = INT_MAX, secMin = INT_MAX;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			if(arr[i] <= minV) {
				secMin = minV;
				minV = arr[i];
			}
			else if(arr[i] < secMin) {
				secMin = arr[i];
			}
		}
		int sum = minV + secMin;
		cout << sum << endl;
	}
	return 0;
}
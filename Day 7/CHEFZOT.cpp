#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int *arr = new int [n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int product = 1, ans = 0, count=0;
	for(int i=0; i<n; i++) {
		product *= arr[i];
		if(product != 0) {
			count ++;
		}
		else {
			product = 1;
			if(arr[i] == 0) {
				count = 0;
			}
			else {
				count = 1;
			}
		}
		ans = max(ans, count);
	}
	cout << ans << endl;
	delete []arr;
	return 0;
}
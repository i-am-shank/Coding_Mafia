#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll equilibrium(int *arr, int sum, int n) {
	ll leftSum = 0, rightSum = sum, index = -1;
	for(int i=0; i<n; i++) {
		rightSum -= arr[i];
		if(leftSum == rightSum) {
			index = i;
			break;
		}
		leftSum += arr[i];
	}
	return index;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ll sum = 0;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		ll ansIndex = equilibrium(arr, sum, n);
		if(ansIndex == -1) {
			cout << "NO EQUILIBRIUM" << endl;
		}
		else {
			cout << arr[ansIndex] << endl;
		}
	}
	return 0;
}
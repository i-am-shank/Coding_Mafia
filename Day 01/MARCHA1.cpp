#include <bits/stdc++.h>
using namespace std;

bool checkSum(int *arr, int s, int n, int m) {
	if(m == 0) {
		return true;
	}
	if(s >= n) {
		return false;
	}
	bool smallAns1 = checkSum(arr, s+1, n, m), smallAns2 = false;
	if(arr[s] <= m) {
		smallAns2 = checkSum(arr, s+1, n, m - arr[s]);
	}
	if(smallAns1 || smallAns2) {
		return true;
	}
	return false;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int arr[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		bool ans = checkSum(arr, 0, n, m);
		cout << (ans == true ? "Yes" : "No") << endl;
	}
	return 0;
}
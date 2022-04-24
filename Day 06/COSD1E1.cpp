#include <bits/stdc++.h>
using namespace std;

int search(int s, int e, int* arr, int x) {
	if(s > e) {
		return s;
	}
	int mid = (s+e)/2;
	if(arr[mid] == x) {
		return mid;
	}
	else if(arr[mid] > x) {
		int smallAns = search(s, mid-1, arr, x);
		return smallAns;
	}
	else {
		int smallAns = search(mid+1, e, arr, x);
		return smallAns;
	}
}

int main() {
	int n;
	cin >> n;
	int *arr = new int[n];
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	int x;
	cin >> x;
	int ans = search(0, n-1, arr, x);
	cout << ans << endl;
	return 0;
}
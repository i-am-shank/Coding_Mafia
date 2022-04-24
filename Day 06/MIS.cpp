#include <bits/stdc++.h>
using namespace std;

int merge(int *arr, int s, int mid, int e) {
	int temp[e-s+1];
	int i=s, j=mid+1, k=0, ans = 0;
	while(i<=mid && j<=e) {
		if(arr[i] <= arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
			ans+= (mid-i+1);
		}
	}
	while(i<=mid) {
		temp[k++] = arr[i++];
	}
	while(j <= e) {
		temp[k++] = arr[j++];
	}
	int l = s;
	for(int i=0; i<k; i++) {
		arr[l++] = temp[i];
	}
	return ans;
}

int countInversion(int *arr, int s, int e) {
	if(s >= e) {
		return 0;
	}
	int mid = (s+e) / 2;
	int smallAns1 = countInversion(arr, s, mid);
	int smallAns2 = countInversion(arr, mid+1, e);
	int ans = merge(arr, s, mid, e);
	return (ans + smallAns1 + smallAns2);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int [n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		int ans = countInversion(arr, 0, n-1);
		for(int i=0; i<n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
		cout << ans << endl;
	}
	return 0;
}
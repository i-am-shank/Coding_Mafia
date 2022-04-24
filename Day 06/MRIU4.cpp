#include <bits/stdc++.h>
using namespace std;

void merge(int *arr, int s, int mid, int e) {
	int temp[e-s+1];
	int i=s, j=mid+1, k=0;
	while(i<=mid && j<=e) {
		if(arr[i] < arr[j]) {
			temp[k++] = arr[i++];
		}
		else {
			temp[k++] = arr[j++];
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
	return;
}

void mergeSort(int *arr, int s, int e) {
	if(s >= e) {
		return ;
	}
	int mid = (s+e) / 2;
	mergeSort(arr, s, mid);
	mergeSort(arr, mid+1, e);
	merge(arr, s, mid, e);
	return;
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
		mergeSort(arr, 0, n-1);
		for(int i=0; i<n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
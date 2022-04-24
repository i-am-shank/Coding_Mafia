#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	int *arr = new int[t];
	for(int i=0; i<t; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+t);
	for(int i=0; i<t; i++) {
		cout << arr[i] << endl;
	}
	delete []arr;
	return 0;
}
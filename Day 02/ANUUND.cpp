#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+n);
		int *temp = new int[n];
		int k=0, e=0, o=(n+1)/2;
		while(k<n) {
			if(k % 2 == 0) {  // even
				temp[k++] = arr[e++];
			}
			else {  // odd
				temp[k++] = arr[o++];
			}
		}
		for(int i=0; i<n; i++) {
			cout << temp[i] << " ";
		}
		cout << endl;
		delete []arr;
		delete []temp;
	}
	return 0;
}
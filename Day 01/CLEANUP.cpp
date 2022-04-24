#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int *arr = new int[m];
		for(int i=0; i<m; i++) {
			cin >> arr[i];
		}
		sort(arr, arr+m);  //  Sorting done jobs
		int *jobs = new int[n-m];
		int k = 0;
		for(int j=1; j<arr[0]; j++) {  //  Gathering left-over jobs
			jobs[k++] = j;
		}
		for(int i=1; i<m; i++) {
			for(int j=arr[i-1]+1; j<arr[i]; j++) {
				jobs[k++] = j;
			} 
		}
		for(int j=arr[m-1]+1; j<=n; j++) {
			jobs[k++] = j;
		}
		for(int i=0; i<n-m; i+=2) {  //  Jobs done by chef
			cout << jobs[i] << " ";
		}
		cout << endl;
		for(int i=1; i<n-m; i+=2) {  //  Jobs done by assistant
			cout << jobs[i] << " ";
		}
		cout << endl;
		delete []arr;
		delete []jobs;
	}
	return 0;
}
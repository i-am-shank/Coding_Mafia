#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >>t ;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		ll sum = 0;
		sort(arr, arr+n);
		for(int i=n-1; i>0; i--) {
			sum += i;
		}
		cout << sum << endl;
	}
	return 0;
}
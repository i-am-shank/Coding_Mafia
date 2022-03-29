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
		int k;
		cin >> k;
		int johny = arr[k-1], ans;
		sort(arr, arr+n);
		for(int i=0; i<n; i++) {
			if(arr[i] == johny) {
				ans = i;
				break;
			}
		}
		cout << ans+1 << endl;
	}
	return 0;
}
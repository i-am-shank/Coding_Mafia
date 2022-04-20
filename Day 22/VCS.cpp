#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m, k;
		cin >> n >> m >> k;
		int *arr = new int[n+1];
		for(int i=1; i<n+1; i++) {
			arr[i] = 0;
		}
		for(int i=0; i<m; i++) {
			int a;
			cin >> a;
			arr[a]++;
		}
		for(int i=0; i<k; i++) {
			int b;
			cin >> b;
			arr[b]++;
		}
		int ans1 = 0, ans2 = 0;
		for(int i=1; i<n+1; i++) {
			if(arr[i] == 2) {
				ans1++;
			}
			else if(arr[i] == 0) {
				ans2++;
			}
		}
		cout << ans1 << " " << ans2 << endl;
		delete []arr;
	}
	return 0;
}
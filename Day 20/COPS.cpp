#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[101] = {0};
		int m, x, y;
		cin >> m >> x >> y;
		int val = x * y;
		for(int i=0; i<m; i++) {
			int num;
			cin >> num;
			int start = num-val, end = num+val;
			if(start < 1) {
				start = 1;
			}
			if(end > 100) {
				end = 100;
			}
			for(int j=start; j<=end; j++) {
				arr[j] = 1;
			}
		}
		int ans = 0;
		for(int i=1; i<=100; i++) {
			if(arr[i] == 0) {
				ans ++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
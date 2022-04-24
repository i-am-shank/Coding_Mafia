#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[10];
		for(int i=0; i<10; i++) {
			cin >> arr[i];
		}
		int minF = arr[0], minV = 0;
		for(int i=1; i<10; i++) {
			if(arr[i] < minF) {
				minF = arr[i];
				minV = i;
			}
		}
		long long ans = 0;
		if(minV == 0) {
			ans = pow(10, minF+1);
		}
		else {
			ans = minV;
			for(int i=0; i<minF; i++) {
				ans = (ans * 10) + ans;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
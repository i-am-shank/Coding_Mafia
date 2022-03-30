#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		int arr[n+1] = {0};
		for(int i=1; i<=m; i++) {
			int u, v;
			cin >> u >> v;
			arr[u] = 1;
			arr[v] = 1;
		}
		int countLeft = 0;
		for(int i=1; i<=n; i++) {
			if(arr[i] == 0) {
				countLeft ++;
			}
		}
		if(countLeft % 2 == 0) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int **arr = new int*[n];
		pair<int, int> index[(n*n) + 1];
		index[0] = make_pair(-1,-1);
		for(int i=0; i<n; i++) {
			arr[i] = new int[n];
			for(int j=0; j<n; j++) {
				cin >> arr[i][j];
				index[arr[i][j]].first = i;
				index[arr[i][j]].second = j;
			}
		}
		int steps = 0;
		for(int i=2; i<=n*n; i++) {
			int x = abs(index[i].first - index[i-1].first);
			int y = abs(index[i].second - index[i-1].second);
			steps += (x + y);
		}
		cout << steps << endl;
	}
	return 0;
}
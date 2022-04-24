#include <bits/stdc++.h>
using namespace std;

int dist(int i, int j) {
	if(i < j) {
		return dist(j, i);
	}
	if(i == j) {
		return 0;
	}
	return (1 + dist(i/2, j));
}

int main() {
	int n;
	cin >> n;
	while(n--) {
		int i,j;
		cin >> i >> j;
		int ans = dist(i, j);
		cout << ans << endl;
	}
	return 0;
}
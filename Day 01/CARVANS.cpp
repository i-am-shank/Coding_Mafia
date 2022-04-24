#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int speeds[n];
		for(int i=0; i<n; i++) {
			cin >> speeds[i];
		}
		int maxSpeedNum = 1, minSpeed = speeds[0];
		for(int i=1; i<n; i++) {
			minSpeed = min(minSpeed, speeds[i]);
			if(speeds[i] <= minSpeed) {
				maxSpeedNum ++;
			}
		}
		cout << maxSpeedNum << endl;
	}
	return 0;
}
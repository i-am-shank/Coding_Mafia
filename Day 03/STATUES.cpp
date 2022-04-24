#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, t=0;
	cin >> n;
	while(n != 0) {
		t++;
		int *arr = new int[n];
		int sum = 0;
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			sum += arr[i];
		}
		int avg = sum / n, deviation = 0;
		for(int i=0; i<n; i++) {
			deviation += (abs(arr[i] - avg));
		}
		int ans = deviation / 2;
		cout << "Set #" << t << endl;
		cout << "The minimum number of moves is " << ans << "." << endl << endl;
		cin >> n;
	}
	return 0;
}
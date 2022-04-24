#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[10001] = {0};
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			arr[ele]++;
		}
		int maxV = 0, maxF = arr[0];
		for(int i=0; i<10001; i++) {
			if(arr[i] > maxF) {
				maxF = arr[i];
				maxV = i;
			}
		}
		cout << maxV << " " << maxF << endl;
	}
	return 0;g
}
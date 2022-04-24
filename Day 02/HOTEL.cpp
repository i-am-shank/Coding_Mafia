#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *a = new int[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];
		}
		int *d = new int[n];
		for(int i=0; i<n; i++) {
			cin >> d[i];
		}
		sort(a, a+n);
		sort(d, d+n);
		int i=0, j=0, maxNum = 0, num = 0;
		while(i<n  &&  j<n) {
			if(a[i] < d[j]) {
				num ++;
				i++;
			}
			else if(a[i] > d[j]) {
				num --;
				j++;
			}
			else {
				i++;
				j++;
			}
			maxNum = max(maxNum, num);
		}
		cout << maxNum << endl;
		delete []a;
		delete []d;
	}
	return 0;
}
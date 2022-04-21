#include <bits/stdc++.h>
using namespace std;

int main() {
	int s;
	cin >> s;
	while(s--) {
		int n;
		cin >> n;
		int *h = new int[n];
		bool ans;
		for(int i=0; i<n; i++) {
			cin >> h[i];
		}
		if(n % 2 != 0) {
			bool temp1 = (h[0] == 1);
			bool temp2 = true, temp3 = true;
			for(int i=0; i<n/2; i++) {
				if(h[i+1] - h[i] != 1) {
					temp2 = false;
					break;
				}
			}
			for(int i=n/2; i<n-1; i++) {
				if(h[i] - h[i+1] != 1) {
					temp3 = false;
					break;
				}
			}
			ans = (temp1 && temp2 && temp3);
		}
		else {
			ans = false;
		}
		cout << (ans == true ? "yes" : "no") << endl;
		delete []h;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int b;
		cin >> b;
		int num = 0;
		for(int i=1; i<b/2; i++) {
			num += i;
		}
		cout << num << endl;
	}
	return 0;
}
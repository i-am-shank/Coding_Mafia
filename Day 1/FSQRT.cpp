#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int i=0;
		while(i*i <= n) {
			i++;
		}
		cout << i-1 << endl;
	}
	return 0;
}
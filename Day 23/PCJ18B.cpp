#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int count = 0;
		for(int i=1; i<=n; i+=2) {  // iterating over odd nums.
			count +=  ((n-i+1) * (n-i+1));  // Count of squares of length i, in square of length n
		}
		cout << count << endl;
	}
	return 0;
}
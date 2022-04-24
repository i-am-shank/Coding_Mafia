#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool flag = true;
		for(int i=2; i*i<=n; i++) {
			if(n % i == 0) {
				flag = false;
				break;
			}
		}
		if(n == 1) {
		    flag = false;
		}
		cout << (flag == true ? "yes" : "no") << endl;
	}
	return 0;
}
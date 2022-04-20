#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b, ca=0, cb=0;
		cin >> a >> b;
		int i=1, j=2;
		while(a-i >= 0) {
			a -= i;
			i += 2;
			ca++;
		}
		while(b-j >= 0) {
			b -= j;
			j += 2;
			cb++;
		}
		if(ca > cb) {
			cout << "Limak" << endl;
		}
		else {
			cout << "Bob" << endl;
		}
	}
	return 0;
}
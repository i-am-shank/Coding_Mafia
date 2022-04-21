#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x1, x2, x3, v1, v2;
		cin >> x1 >> x2 >> x3 >> v1 >> v2;
		float t1 = (float)abs(x3-x1) / float(v1);
		float t2 = (float)abs(x3-x2) / float(v2);
		if(t1 < t2) {
			cout << "Chef" << endl;
		}
		else if(t2 < t1) {
			cout << "Kefa" << endl;
		}
		else {
			cout << "Draw" << endl;
		}
	}
	return 0;
}
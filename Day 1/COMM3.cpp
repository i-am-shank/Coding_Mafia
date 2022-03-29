#include <bits/stdc++.h>
using namespace std;

int distanceSq(int x1, int y1, int x2, int y2) {
	int ans = ((y2-y1)*(y2-y1)  +  (x2-x1)*(x2-x1));
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int r;
		cin >> r;
		int xc, yc, xh, yh, xs, ys;
		cin >> xc >> yc >> xh >> yh >> xs >> ys;
		int ch = distanceSq(xc, yc, xh, yh);
		int hs = distanceSq(xh, yh, xs, ys);
		int sc = distanceSq(xs, ys, xc, yc);
		int count = 0;
		if(ch <= r*r) {
			count ++;
		}
		if(hs <= r*r) {
			count ++;
		}
		if(sc <= r*r) {
			count ++;
		}
		if(count >= 2) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}
	return 0;
}
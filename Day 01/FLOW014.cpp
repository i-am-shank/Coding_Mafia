#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		float h, cc, ts;
		cin >> h >> cc >> ts;
		bool c1=false, c2=false, c3=false;
		if(h > 50) {
			c1 = true;
		}
		if(cc < 0.7) {
			c2 = true;
		}
		if(ts > 5600) {
			c3 = true;
		}
		     //  Grading
		int grade = 0;
		if(c1 && c2 && c3) {
			grade = 10;
		}
		else if(c1 && c2) {
			grade = 9;
		}
		else if(c2 && c3) {
			grade = 8;
		}
		else if(c3 && c1) {
			grade = 7;
		}
		else if(c1 || c2 || c3) {
			grade = 6;
		}
		else {
			grade = 5;
		}
		cout << grade << endl;
	}
	return 0;
}
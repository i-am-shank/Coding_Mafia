#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, b;
		cin >> n >> b;
		bool flag = false;
		int area = 0;
		for(int i=0; i<n; i++) {
			int w, h, p;
			cin >> w >> h >> p;
			if(p <= b) {
				flag = true;
				int temp = w*h;
				if(temp >= area) {
					area = temp;
				}
			}
		}
		if(flag == true) {
			cout << area << endl;
		}
		else {
			cout << "no tablet" << endl;
		}
	}
	return 0;
}
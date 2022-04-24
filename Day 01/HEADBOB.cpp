#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int num;
		cin >> num;
		int n=0, y=0, i=0;
		while(num--) {
			char c;
			cin >> c;
			if(c == 'N') {
				n++;
			}
			else if(c == 'Y') {
				y++;
			}
			else {
				i++;
			}
		}
		if(i==0 && y==0) {
			cout << "NOT SURE" << endl;
		}
		else if(i != 0) {
			cout << "INDIAN" << endl;
		}
		else {
			cout << "NOT INDIAN" << endl;
		}
	}
	return 0;
}
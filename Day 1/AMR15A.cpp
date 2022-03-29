#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int countEven = 0, countOdd = 0;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		if(ele % 2 == 0) {
			countEven++;
		}
		else {
			countOdd++;
		}
	}
	if(countEven > countOdd) {
		cout << "READY FOR BATTLE" << endl;
	}
	else {
		cout << "NOT READY" << endl;
	}
	return 0;
}
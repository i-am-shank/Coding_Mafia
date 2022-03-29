#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int countEven = 0, countOdd = 0;
	while(n--) {
		int ele;
		cin >> ele;
		if(ele % 2 == 0) {
			countEven ++;
		}
		else {
			countOdd ++;
		}
	}
	cout << abs(countEven - countOdd) << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sum = 0;
	cin >> n;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		sum += ele;
	}
	int target = 0;
	while(n) {
		target += n;
		n--;
	}
	if(sum == target) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}
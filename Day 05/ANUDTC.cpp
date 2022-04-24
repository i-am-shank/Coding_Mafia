#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ans1 = (360 % n == 0);
		bool ans2 = (360 >= n);
		bool ans3 = (360 >= (n*(n+1))/2);
		cout << (ans1?"y":"n") <<" "<< (ans2?"y":"n") <<" "<< (ans3?"y":"n") << endl;
	}
	return 0;
}
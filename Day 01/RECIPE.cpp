#include <bits/stdc++.h>
using namespace std;

int calculate_gcd(int a, int b) {  // Euclid's algorithm
	if(a < b) {
		return calculate_gcd(b, a);
	}
	if(b == 0) {
		return a;
	}
	return calculate_gcd(b, a%b);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		//  Find gcd of all nums, and divide all of them..
		int gcd = arr[0];
		for(int i=1; i<n; i++) {
			gcd = calculate_gcd(gcd, arr[i]);
		}
		for(int i=0; i<n; i++) {
			arr[i] /= gcd;
		}
		for(int i=0; i<n; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}
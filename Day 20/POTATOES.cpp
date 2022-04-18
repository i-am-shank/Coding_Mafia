#include <bits/stdc++.h>
using namespace std;

int smallestPrime(int s, int e) {
	int arr[e+1] = {0};  // 0 -> prime   ,   1 -> non-prime
	for(int i=2; i*i<=e; i++) {
		for(int j=i*i; j<=e; j+=i) {
			arr[j] = 1;
		}
	}
	int ans = e;
	if(s < 2) {
		s = 2;
	}
	for(int i=s; i<=e; i++){
		if(arr[i] == 0) {
			ans = i;
			break;
		}
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		int sum = (x+y);
		int start = (sum+1), end = (2*sum);
		int ans = smallestPrime(start, end);
		cout << ans-sum << endl;
	}
	return 0;
}
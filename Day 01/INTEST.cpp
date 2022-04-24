#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	ll n, k;
	cin >> n >> k;
	int count = 0;
	for(int i=0; i<n; i++) {
		ll ele;
		cin >> ele;
		if(ele % k == 0) {
			count ++;
		}
	}
	cout << count << endl;
	return 0;
}
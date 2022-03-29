#include <bits/stdc++.h>
using namespace std;

int countMenus(int p) {
	int count = 0;
	int price[12] = {2048,1024,512,256,128,64,32,16,8,4,2,1};
	for(int i=0; i<12; i++) {
		if(price[i] <= p) {
			count += p / price[i];
			p %= price[i];
		}
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int p;
		cin >> p;
		int ans = countMenus(p);
		cout << ans << endl;
	}
	return 0;
}
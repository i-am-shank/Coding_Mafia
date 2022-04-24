#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int x, y, k, n;
		cin >> x >> y >> k >> n;
		int pages[n], cost[n];
		for(int i=0; i<n; i++) {
			cin >> pages[i] >> cost[i];
		}
		int pageReq = x - y;
		bool flag = false;
		for(int i=0; i<n; i++) {
			if(pageReq <= pages[i]  &&  k >= cost[i]) {
				flag = true;
				break;
			}
		}
		cout << (flag == true ? "LuckyChef" : "UnluckyChef") << endl;
	}
	return 0;
}
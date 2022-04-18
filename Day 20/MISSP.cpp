#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		unordered_map<int, int> freqMap;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			if(freqMap.find(ele) != freqMap.end()) {
				freqMap[ele]++;
			}
			else {
				freqMap[ele] = 1;
			}
		}
		int ans;
		unordered_map<int, int> :: iterator it;
		for(it=freqMap.begin(); it!=freqMap.end(); it++) {
			if(it->second % 2 == 1) {
				ans = it->first;
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
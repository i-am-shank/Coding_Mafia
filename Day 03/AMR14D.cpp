#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		bool ans = true;
		unordered_map<int, int> ourmap;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			if(ourmap.find(ele) != ourmap.end()) {
				ans = false;
			}
			else {
				ourmap.insert(make_pair(ele,1));
			}
		}
		cout << (ans == true ? "YES" : "NO") << endl;
	}
	return 0;
}
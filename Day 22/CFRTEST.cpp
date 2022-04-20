#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		unordered_set<int> s;
		for(int i=0; i<n; i++) {
			int ele;
			cin >> ele;
			s.insert(ele);
		}
		int ans = s.size();
		cout << ans << endl;
	}
	return 0;
}
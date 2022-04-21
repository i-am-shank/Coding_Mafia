#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k, countL = 0, countS = 0;
		cin >> n >> k;
		string s;
		cin >> s;
		for(int i=0; i<n; i++) {
			int val = (int)s[i];
			if(val >= 97) {
				countS ++;
			}
			else {
				countL++;
			}
		}
		if(countL <= k  &&  countS <= k) {
			cout << "both" << endl;
		}
		else if(countS <= k) {
			cout << "brother" << endl;
		}
		else if(countL <= k) {
			cout << "chef" << endl;
		}
		else {
			cout << "none" << endl;
		}
	}
	return 0;
}
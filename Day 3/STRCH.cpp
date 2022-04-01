#include <bits/stdc++.h>
#include <vector>
using namespace std;

long long numSubStr(string s, char x, int n) {
	long long ans = (n*(n+1)) / 2, len = 0;
	vector<int> v = {-1};
	for(int i=0; i<n; i++) {
		if(s[i] == x) {
			v.push_back(i);
		}
	}
	v.push_back(n);
	for(int i=1; i<v.size(); i++) {
		len = v[i] - v[i-1] - 1;
		ans -= ((len*(len+1)) / 2);
	}
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		char x;
		cin >> x;
		long long ans = numSubStr(s, x, n);
		cout << ans << endl;
	}
	return 0;
}
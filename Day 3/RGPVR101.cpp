#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		int mid = n/2;
		reverse(s.begin(), s.begin()+mid);
		reverse(s.begin()+mid, s.end());
		cout << s << endl;
	}
	return 0;
}
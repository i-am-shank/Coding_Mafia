#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int freq[256] = {0};
		for(int i=0; i<s.size(); i++){
			freq[(int)s[i]] ++;
		}
		int cost = 0;
		for(int i=0; i<256; i++) {
			cost += (freq[i]/2) + (freq[i]%2);
		}
		cout << cost << endl;
	}
	return 0;
}
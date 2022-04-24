#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	string m;
	cin >> t >> m;
	unordered_map <char, char> ourmap;
	for(int i=0; i<m.size(); i++) {
		ourmap['a'+i] = m[i];  // 97 - 122  ..  65 - 90
		ourmap['A'+i] = m[i] - 32;
	}
	ourmap['_'] = ' ';
	while(t--) {
		string s, ans="";
		cin >> s;
		for(int i=0; i<s.size(); i++) {
			if((s[i]>='a' && s[i]<='z')  ||  (s[i]>='A' && s[i]<='Z')  ||  (s[i]=='_')) {
				ans.push_back(ourmap[s[i]]);
			}
			else {
				ans.push_back(s[i]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
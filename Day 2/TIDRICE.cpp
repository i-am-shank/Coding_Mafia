#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, score = 0;
		cin >> n;
		unordered_map <string, char> names;
		for(int i=0; i<n; i++) {
			string s;
			cin >> s;
			char c;
			cin >> c;
			if(names.find(s) != names.end()) {
				if(names[s] == '+') {
					score--;
				}
				else {
					score++;
				}
				names[s] = c;
			}
			else {
				names.insert(make_pair(s, c));
			}
			if(c == '+') {
				score++;
			}
			else {
				score--;
			}
		}
		cout << score << endl;
	}
	return 0;
}
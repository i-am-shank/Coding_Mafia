#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n;
	cin >> k >> n;
	vector<string> fav;
	for(int i=0; i<k; i++) {
		string s;
		cin >> s;
		fav.push_back(s);
	}
	while(n--) {
		string s;
		cin >> s;
		if(s.size() >= 47) {
			cout << "Good" << endl;
		}
		else {
			bool flag = false;
			for(int i=0; i<k; i++) {
				if(s.find(fav[i]) != string::npos) {
					flag = true;
					break;
				}
			}
			if(flag == true) {
				cout << "Good" << endl;
			}
			else {
				cout << "Bad" << endl;
			}
		}
	}
	return 0;
}
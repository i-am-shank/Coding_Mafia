#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string a, b;
		cin >> a >> b;
		int arra[26]={0}, arrb[26]={0};
		for(int i=0; i<a.size(); i++) {
			arra[a[i]-'a']++;
		}
		for(int i=0; i<b.size(); i++) {
			arrb[b[i]-'a']++;
		}
		bool flag = true;
		for(int i=0; i<26; i++) {
			if(arra[i] != arrb[i]) {
				flag = false;
				break;
			}
		}
		cout << (flag == true ? "YES" : "NO") << endl;
	}
	return 0;
}
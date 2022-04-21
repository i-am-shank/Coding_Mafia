#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int n = s.size();
		bool flag = true;
		for(int i=0; i<n-1; i+=2) {
			if(s[i] == s[i+1]) {
				flag = false;
				break;
			}
		}
		cout << (flag == true ? "yes" : "no") << endl;
	}
	return 0;
}
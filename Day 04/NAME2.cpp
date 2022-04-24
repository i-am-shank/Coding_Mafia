#include <bits/stdc++.h>
using namespace std;

bool isSubsequence(string a, string b) {
	map<char, int> mapA;
	for(int i=0; i<a.size(); i++) {
		if(mapA.find(a[i]) != mapA.end()) {
			mapA[a[i]] ++;
		}
		else {
			mapA[a[i]] = 1;
		}
	}
	map<char, int> mapB;
	for(int i=0; i<b.size(); i++) {
		if(mapB.find(b[i]) != mapB.end()) {
			mapB[b[i]]++;
		}
		else {
			mapB[b[i]] = 1;
		}
	}
	bool flag = true;
	for(int i=0; i<b.size(); i++) {
		if(mapA[b[i]] < mapB[b[i]]) {
			flag = false;
			break;
		}
	}
	return flag;
}

int main(){
	int t;
	cin >> t;
	while(t--) {
		string m, w;
		cin >> m >> w;
		bool ans;
		if(m.size() >= w.size()) {
			ans = isSubsequence(m, w);
		}
		else {
			ans = isSubsequence(w, m);
		}
		cout << (ans == true ? "YES" : "NO") << endl;
	}
	return 0;
}
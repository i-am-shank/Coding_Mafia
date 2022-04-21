#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		int counts = 0, countm = 0, n = s.size();
		for(int i=0; i<n; i++) {
			if(s[i] == 's') {
				counts++;
			}
			else {
				countm++;
			}
		}
		int* mfreq = new int[n];
		for(int i=0; i<n; i++) {
			mfreq[i] = 0;
		}
		for(int i=0; i<n; i++) {
			if(s[i] == 'm'  &&  mfreq[i]==0) {
				if(i>0 && s[i-1]=='s') {
					counts--;
					mfreq[i] ++;
					s[i-1] = '.';
				}
				else {
					if(i<n-1 && s[i+1]=='s') {
						counts--;
						s[i+1] = '.';
						mfreq[i]++;
					}
				}
			}
		}
		delete []mfreq;
		if(counts > countm) {
			cout << "snakes" << endl;
		}
		else if(counts < countm) {
			cout << "mongooses" << endl;
		}
		else {
			cout << "tie" << endl;
		}
	}
	return 0;
}
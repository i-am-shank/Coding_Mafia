#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int count1=0, count0=0, flag = 0;
		bool wins = false;
		int n = s.size();
		for(int i=0; i<n; i++) {
			if(s[i] == '1') {
				count1 ++;
			}
			else {
				count0 ++;
			}
			if(flag == 0) {
				if(count1 == 11) {
					wins = true;
					break;
				}
				else if(count0 == 11) {
					break;
				}
			}
			else if(flag == 1) {  // case only comes when atleast 1 have > 10 points.
				if(abs(count1 - count0) >= 2) {
					wins = (count1 > count0);
					break;
				}
			}
			if(count1 == 10  &&  count0 == 10) {
				flag = 1;  // Game will be decided by >= 2 point difference
			}
		}
		cout << (wins == true? "WIN" : "LOSE") << endl;
	}
	return 0;
}
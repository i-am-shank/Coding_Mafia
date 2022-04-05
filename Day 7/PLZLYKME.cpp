#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll l,d,s,c;
		cin >> l >> d >> s >> c;
		ll likes = s;
		bool flag = false;
		for(int i=2; i<=d; i++) {
			ll temp = (likes) + (c*likes);
			likes = temp;
			if(likes >= l) {
				flag = true;
				break;
			}
		}
		if(likes >= l  ||  flag==true) {
			cout << "ALIVE AND KICKING" << endl;
		}
		else {
			cout << "DEAD AND ROTTING" << endl;
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int maxCount = 0, count = 0;
		for(int i=0; i<30; i++) {
			int ele;
			cin >> ele;
			if(ele == 1) {
				count++;
			}
			else {
				count = 0;
			}
			maxCount = max(maxCount, count);
		}
		if(maxCount > 5) {
			cout << "#coderlifematters" << endl;
		}
		else {
			cout << "#allcodersarefun" << endl;
		}
	}
	return 0;
}
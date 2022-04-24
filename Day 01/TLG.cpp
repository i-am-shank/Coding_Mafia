#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int w = 0, maxLead = INT_MIN, score1 = 0, score2 = 0;
	while(n--) {
		int a, b;
		cin >> a >> b;
		score1 += a;
		score2 += b;
		int lead = abs(a - b);
		if(lead > maxLead) {
			if(score1 > score2) {
				w = 1;
			}
			else {
				w = 2;
			}
			maxLead = max(lead, maxLead);
		}
	}
	cout << w << " " << maxLead << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int countNotes(int n) {
	int notes[6] = {100, 50, 10, 5, 2, 1};
	int count = 0;
	for(int i=0; i<6; i++) {
		if(n >= notes[i]) {
			count += n / notes[i];
			n %= notes[i];
		}
	}
	return count;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int count = countNotes(n);
		cout << count << endl;
	}
	return 0;
}
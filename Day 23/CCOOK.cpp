#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--) {
		int count1 = 0;
		for(int i=0; i<5; i++) {
			int ele;
			cin >> ele;
			if(ele == 1) {
				count1++;
			}
		}
		// "Beginner", "Junior Developer", "Middle Developer", "Senior Developer", "Hacker", "Jeff Dean"
		switch(count1) {
			case 0:
				cout << "Beginner" << endl;
				break;
			case 1:
				cout << "Junior Developer" << endl;
				break;
			case 2:
				cout << "Middle Developer" << endl;
				break;
			case 3:
				cout << "Senior Developer" << endl;
				break;
			case 4:
				cout << "Hacker" << endl;
				break;
			case 5:
				cout << "Jeff Dean" << endl;
				break;
		}
	}
	return 0;
}
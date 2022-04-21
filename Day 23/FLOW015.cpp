#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int year, ans, x = 1990;  // 1990 also has 1st January --> Monday
		cin >> year;
		int diff = year - x, leap = 0;
		while(year > x) {
			if(year % 100 == 0) {
				if(year % 400 == 0) {
					leap ++;
				}
			}
			else {
				if(year % 4 == 0) {
					leap ++;
				}
			}
			year--;
		}
		ans = ((diff-leap)*365)  +  (leap*366);
		ans = ans % 7;
		string arr[7]= {"monday","tuesday","wednesday","thursday","friday","saturday","sunday"};
		cout << arr[ans] << endl;
	}
	return 0;
}
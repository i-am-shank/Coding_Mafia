#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	unordered_map<int, int> ourmap;
	int count = 0;
	for(int i=0; i<k; i++) {
		string s;
		cin >> s;
		if(s == "CLOSEALL") {
			ourmap.clear();
			count = 0;
		}
		else {
			int num;
			cin >> num;
			if(ourmap.find(num) != ourmap.end()) {
				ourmap.erase(num);
				count--;
			}
			else {
				ourmap[num] = 1;
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
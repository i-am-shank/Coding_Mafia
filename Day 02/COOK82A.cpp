#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int arr[4];
		unordered_map <string, int> map;
		for(int i=0; i<4; i++) {
			string s;
			cin >> s;
			int g;
			cin >> g;
			map[s] = g;
		}
		if((map["RealMadrid"] < map["Malaga"])  &&  (map["Barcelona"] > map["Eibar"])){
			cout << "Barcelona" << endl;
		}
		else {
			cout << "RealMadrid" << endl;
		}
	}
	return 0;
}
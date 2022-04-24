#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
		}
		set<int> s;
		for(int i=0; i<n; i++) {
			s.insert(arr[i]);
		}
		cout << s.size() << endl;
		delete []arr;
	}
	return 0;
}
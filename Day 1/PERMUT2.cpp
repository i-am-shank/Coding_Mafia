#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n != 0) {
		int arr[n+1];
		for(int i=1; i<=n; i++) {
			cin >> arr[i];
		}
		bool flag = true;
		for(int i=1; i<=n; i++) {
			if(arr[arr[i]] != i) {  //  Condition for ambiguous permutation .. 1-indexed array
				flag = false;
				break;
			}
		}
		if(flag == true) {
			cout << "ambiguous" << endl;
		}
		else {
			cout << "not ambiguous" << endl;
		}
		cin >> n;
	}
	return 0;
}
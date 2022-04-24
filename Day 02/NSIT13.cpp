#include <bits/stdc++.h>
using namespace std;

int main() {
	int t = 10;
	while(t--) {
		int arr[10];
		for(int i=0; i<10; i++) {
			cin >> arr[i];
			arr[i] %= 42;
		}
		sort(arr, arr+10);
		int prev = arr[0], count = 1;
		for(int i=1; i<10; i++) {
			if(arr[i] != prev) {
				prev = arr[i];
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
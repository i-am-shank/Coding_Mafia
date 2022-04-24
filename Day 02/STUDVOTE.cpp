#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, k;
		cin >> n >> k;
		bool flag[101];
		int count[101]={0};
		for(int i=0; i<=100; i++) {
			flag[i] = true;
		}
		int *arr = new int[n];
		for(int i=0; i<n; i++) {
			cin >> arr[i];
			if(arr[i] == i+1) {
				flag[i+1] = false;
			}
			count[arr[i]] ++;
		}
		int num = 0;
		for(int i=0; i<101; i++) {
			if(count[i] >= k  &&  flag[i] != false) {
				num++;
			}
		}
		cout << num << endl;
	}
	return 0;
}
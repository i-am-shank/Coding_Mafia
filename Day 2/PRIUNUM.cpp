#include <bits/stdc++.h>
using namespace std;

int main() {
	long int t, n;
	cin >> t;
	int *arr = new int[t];
	int maxV = INT_MIN;
	for(int i=0; i<t; i++) {
		cin >> arr[i];
		maxV = max(maxV, arr[i]);
	}

	// -----Creating sieve--------
	bool flag[maxV+1];
	for(int i=2; i<=maxV; i++) {
		flag[i] = true;
	}
	flag[0] = false;
	flag[1] = false;
	for(int i=2; i*i<=maxV; i++) {
		if(flag[i] == true) {
			for(int j=i*i; j<=maxV; j+=i) {
				flag[j] = false;
			}
		}
	}

	// ----Creating count array ... with the help of sieve-----
	int count[maxV+1] = {0};
	for(int i=2; i<=maxV; i++) {
		if(flag[i] == true) {
			count[i] = count[i-1] + 1;
		}
		else {
			count[i] = count[i-1];
		}
	}

	for(int i=0; i<t; i++) {
		cout << count[arr[i]] << endl;
	}
	return 0;
}
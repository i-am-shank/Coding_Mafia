#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll maxEle(ll *arr, ll n) {
	ll maxV = arr[0];
	for(ll i=1; i<n; i++) {
		maxV = max(arr[i], maxV);
	}
	return maxV;
}

int main() {
	ll n, k;
	cin >> n >> k;
	ll *arr = new ll [n];
	for(ll i=0; i<n; i++) {
		cin >> arr[i];
	}
	if(k%2==0  &&  k!=0) {
		k = 2;
	}
	else if(k%2 == 1) {
		k = 1;
	}
	ll maxV;
	while(k--) {
		maxV = maxEle(arr, n);
		for(ll i=0; i<n; i++) {
			arr[i] = maxV - arr[i];
		}
	}
	for(ll i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return 0;
}
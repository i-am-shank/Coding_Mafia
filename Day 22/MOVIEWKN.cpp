#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int *l = new int[n];
		for(int i=0; i<n; i++) {
			cin >> l[i];
		}
		int *r = new int[n];
		for(int i=0; i<n; i++) {
			cin >> r[i];
		}
		int index=0, product = l[0]*r[0], ansr=r[0];
		for(int i=0; i<n; i++) {
			int currProduct = l[i]*r[i];
			if(currProduct > product) {
				product = currProduct;
				ansr = r[i];
				index = i;
			}
			else if(currProduct == product) {
				if(r[i] > ansr) {
					product = currProduct;
					ansr = r[i];
					index = i;
				}
			}
		}
		delete []l;
		delete []r;
		cout << index+1 << endl;
	}
	return 0;
}
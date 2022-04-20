#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
	int t;
	cin >> t;
	while(t--) {
		ll n;
		cin >> n;
		vector<ll> v;
		for(int i=0; i<n; i++) {
			ll ele;
			cin >> ele;
			v.push_back(ele);
		}
		vector<ll> ans(n);
		ans[n-1] = 1;
		for(int i=n-2; i>=0; i--) {
			if(v[i]*v[i+1] < 0) {
				ans[i] = ans[i+1] + 1;
			}
			else {
				ans[i] = 1;
			}
		}
		for(int i=0; i<n; i++) {
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
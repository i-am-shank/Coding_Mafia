#include <bits/stdc++.h>
#include <vector>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
    	vector<bool> sieve(n+1, true);
    	sieve[0] = false;
    	sieve[1] = false;
		for(int i=2; i*i<=n; i++) {
			if(sieve[i] == true) {
				for(int j=i*i; j<=n; j+=i) {
					sieve[j] = false;
				}
			}
		}
        int ans = 0;
        for(int i=0; i<n; i++) {
        	if(sieve[i] == true) {
        		ans++;
        	}
        }
        return ans;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	int ans = solve.countPrimes(n);
	cout << ans << endl;
	return 0;
}
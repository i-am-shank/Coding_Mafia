#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:

	// Time Complexity = O(logN)  ..  faster than O(sqrt(N)) approach
	// Space Complexity = O(1)

    int mySqrt(ll x) {
    	ll s=0, e=x, ans;
    	while(s <= e) {
    		ll mid = (s+e) / 2;
    		if(mid * mid == x) {
    			ans = mid;
    			return ans;
    		}
    		else if(mid * mid > x) {
    			e = mid-1;
    			ans = s;
    		}
    		else {
    			s = mid+1;
    			ans = s;
    		}
    	}
    	if(ans * ans == x) {
    		return ans;
    	}
		return (ans-1);
    }
};

int main() {
	Solution solve;
	ll n;
	cin >> n;
	ll ans = solve.mySqrt(n);
	cout << ans << endl;
	return 0;
}
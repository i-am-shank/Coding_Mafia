#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:
    int arrangeCoins(int n) {
        ll s = 1, e = n;
        while(s <= e) {
        	ll mid = s + ((e-s)/2);
        	ll sum = ((mid)*(mid+1)) / 2;
        	if(sum == n) {
                return mid;
        	}
        	else if(sum < n) {
        		s = mid+1;
        	}
        	else {
        		e = mid-1;
        	}
        }
        return s-1;  // Just 1 less.. if exact count found.. returned in the sum == n case.
    }
};

int main() {
	int n;
	cin >> n;
	Solution solve;
	int ans = solve.arrangeCoins(n);
	cout << ans << endl;
	return 0;
}
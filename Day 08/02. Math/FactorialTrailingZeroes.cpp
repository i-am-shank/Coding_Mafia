#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(logN)
	// Space Complexity = O(1)
	
    int trailingZeroes(int n) {
        int m = 5, ans = 0;
        while(m <= n) {
        	ans += (n/m);
        	m *= 5;
        }
        return ans;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	int ans = solve.trailingZeroes(n);
	cout << ans << endl;
	return 0;
}
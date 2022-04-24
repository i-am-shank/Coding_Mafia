#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:

	// Time Complexity = O(logN)
	// Space Complexity = O(1)
	
    int reverse(int x) {
        ll rev = 0;
        while(x != 0) {
        	int digit = x % 10;
        	rev = (rev*10) + digit;
        	x /= 10;
        }
        if(rev > INT_MAX  ||  rev<INT_MIN) {
        	rev = 0;
        }
        return rev;
    }
};

int main() {
	int n;
	cin >> n;
	Solution solve;
	int ans = solve.reverse(n);
	cout << ans << endl;
	return 0;
}
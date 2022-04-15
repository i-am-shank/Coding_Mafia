#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
	double power(double x, ll n) {
		if(n == 0) {
        	return 1;
        }
        if(n == 1) {
        	return x;
        }
        double smallAns = power(x, n/2);
        if(n % 2 == 0) {
        	if(smallAns == 0.0) {
        		return 0.0;
        	}
        	else {
        		return (smallAns * smallAns);
        	}
        }
        else {
        	if(smallAns == 0.0) {
        		return 0.0;
        	}
        	else {
        		return (smallAns * smallAns * x);
        	}
        }
	}

public:

	// Time Complexity = O(logN)
	// Space Complexity = O(logN) .. space waiting in recursion call stack.

    double myPow(double x, int n) {
    	ll newN = (ll)n;
        if(n < 0) {
        	return (1 / power(x, -newN));
        }
        else {
        	return power(x, newN);
        }
    }
};

int main() {
	double x;
	int n;
	cin >> x >> n;
	Solution solve;
	double ans = solve.myPow(x, n);
	cout << fixed << setprecision(5) << ans << endl;
	return 0;
}
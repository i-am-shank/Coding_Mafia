#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
	ll sqSum(int n) {
		ll sum = 0;
		while(n != 0) {
			ll digit = n % 10;
			sum += (digit * digit);
			n /= 10;
		}
		return sum;
	}

public:
    bool isHappy(int n) {
    	if(n < 10) {
    		if(n==1 || n==7) {
    			return true;
    		}
    		else {
    			return false;
    		}
    	}
    	int sum = sqSum(n);
    	return isHappy(sum);
    }
};

int main() {
	int n;
	cin >> n;
	Solution solve;
	bool ans = solve.isHappy(n);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
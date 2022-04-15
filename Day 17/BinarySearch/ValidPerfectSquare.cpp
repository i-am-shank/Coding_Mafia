#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        // Range of answer is [0,num]
    	int s = 0, e = num;
    	while(s <= e) {
    		long long mid = (s+e) / 2;
    		if(mid * mid == num) {
    			return true;
    		}
    		else if(mid * mid > num) {
    			e = mid-1;
    		}
    		else {
    			s = mid+1;
    		}
    	}
    	return false;
    }
};

int main() {
	int num;
	cin >> num;
	Solution solve;
	bool ans = solve.isPerfectSquare(num);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
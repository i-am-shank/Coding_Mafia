#include <bits/stdc++.h>
using namespace std;

class Solution {
	int sumDigits(int n) {
		int sum = 0;
		while(n != 0) {
			int digit = n % 10;
			sum += digit;
			n /= 10;
		}
		return sum;
	}

public:

	// Time Complexity = O(logN)
	// Space Complexity = O(1)

    int addDigits(int num) {
        while(num >= 10) {
        	num = sumDigits(num);
        }
        return num;
    }

    // Time Complexity = O(1)
    // Space Complexity = O(1)
    
    int addDigitsBetter(int num) {
    	if(num == 0) {
    		return 0;
    	}
    	if(num % 9 == 0) {
    		return 9;
    	}
    	else {
    		return (num % 9);
    	}
    }
};

int main() {
	int n;
	cin >> n;
	Solution solve;
	int ans = solve.addDigits(n);
	int ans2 = solve.addDigitsBetter(n);
	cout << ans << endl;
	cout << ans2 << endl;
	return 0;
}
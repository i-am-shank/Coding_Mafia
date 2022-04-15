#include <bits/stdc++.h>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
	// This function is implemented inbuilt in question as guess(int num) {...}
	int guessHelp(int num, int pick) {
		if(num == pick) {
			return 0;
		}
		else if(num > pick) {
			return -1;
		}
		else {
			return 1;
		}
	}

public:
    int guessNumber(int n, int pick) {
        int s = 1, e = n;
        while(s <= e) {
        	long long mid = s + ((e-s)/2);
        	if(guessHelp(mid, pick) == 0) {
        		return mid;
        	}
        	else if(guessHelp(mid, pick) == 1) {
        		s = mid+1;
        	}
        	else {
        		e = mid-1;
        	}
        }
        return 0;
    }
};

int main() {
	int n, pick;
	cin >> n >> pick;
	Solution solve;
	int ans = solve.guessNumber(n, pick);
	cout << ans << endl;
	return 0;
}
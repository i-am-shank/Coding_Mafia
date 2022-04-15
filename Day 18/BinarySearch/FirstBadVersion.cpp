#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
	bool isBadVersion(int n, int bad) {
		if(n >= bad) {
			return true;
		}
		return false;
	}

public:
    int firstBadVersion(int n, int bad) {
        int s = 1, e = n, ans = s;
        while(s <= e) {
        	int mid = s + ((e-s)/2);
        	bool flag = isBadVersion(mid, bad);
        	if(flag == true) {
        		e = mid-1;
        		ans = mid;
        	}
        	else {
        		s = mid+1;
        		ans = mid+1;
        	}
        }
        return ans;
    }
};

int main() {
	int n, bad;
	cin >> n >> bad;
	Solution solve;
	int ans = solve.firstBadVersion(n, bad);
	cout << ans << endl;
	return 0;
}
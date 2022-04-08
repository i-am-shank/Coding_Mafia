#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    int balancedStringSplit(string s) {
        int cl = 0, cr = 0, ans=0;
        for(int i=0; i<s.size(); i++) {
        	if(s[i] == 'R') {
        		cr++;
        	}
        	else {
        		cl++;
        	}
        	if(cl==cr && cl>0) {
        		ans++;
        		cl=0;
        		cr=0;
        	}
        }
        return ans;
    }
};

int main() {
	string s;
	cin >> s;
	Solution solve;
	int ans = solve.balancedStringSplit(s);
	cout << ans << endl;
	return 0;
}
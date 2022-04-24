#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    int maxPower(string s) {
    	char prev = s[0];
    	int ans = 0, len = 0;
        for(int i=0; i<s.size(); i++) {
        	if(prev == s[i]) {
        		len++;
        	}
        	else {
        		prev = s[i];
        		len = 1;
        	}
        	ans = max(len, ans);
        }
        return ans;
    }
};

int main() {
	Solution solve;
	string s;
	cin >> s;
	int ans = solve.maxPower(s);
	cout << ans << endl;
	return 0;
}
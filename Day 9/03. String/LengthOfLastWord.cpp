#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)

    int lengthOfLastWord(string s) {
        int n = s.size();
        int ans = 0;
        for(int i=n-1; i>=0; i--) {
        	if(s[i] != ' ') {
        		ans ++;
        	}
        	if(s[i]==' ' && ans>0) {
        		return ans;
        	}
        }
        return ans;
    }
};

int main() {
	string s;
	cin.getLine(s);
	Solution solve;
	int ans = solve.lengthOfLastWord(s);
	cout << ans << endl;
	return 0;
}
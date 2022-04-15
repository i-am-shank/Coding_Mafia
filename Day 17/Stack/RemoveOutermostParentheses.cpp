#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Time Complexity = O(N)
    // Space Complexity = O(N)
    
    string removeOuterParentheses(string s) {
        int n = s.size(), i=0;
        string ans = "";
        if(n == 0) {
        	return ans;
        }
        stack<char> stk;
        while(i < n) {
    		if(s[i] == '(') {
    			stk.push(s[i]);
    			if(stk.size() > 1) {
    				ans += s[i];
    			}
    		}
    		else {
                if(stk.size() > 1) {
                    ans += s[i];
                }
    			stk.pop();
    		}
            i++;
        }
        return ans;
    }
};

int main() {
	string s;
	cin >> s;
	Solution solve;
	string ans = solve.removeOuterParentheses(s);
	cout << ans << endl;
	return 0;
}
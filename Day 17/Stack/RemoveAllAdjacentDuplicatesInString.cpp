#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N) .. faster than below function
	// Space Complexity = O(1)
	
	string removeDuplicatesBetter(string s) {
		int n = s.size();
		for(int i=1; i<n; i++) {
			if(i>0  &&  s[i]==s[i-1]) {
				s.erase(i-1, 2);
				i -= 2;
			}
		}
		return s;
	}

	// Time Complexity = O(N)
	// Space Complexity = O(N)

    string removeDuplicates(string s) {  // gives TLE
        stack<char> stk;
        int n = s.size();
        for(int i=0; i<n; i++) {
        	if(!stk.empty()  &&  stk.top() == s[i]) {
        		stk.pop();
        	}
        	else {
        		stk.push(s[i]);
        	}
        }
        string ans = "";
        while(!stk.empty()) {
        	ans = stk.top() + ans;
        	stk.pop();
        }
        return ans;
    }
};

int main() {
	string s;
	cin >> s;
	Solution solve;
	string ans = solve.removeDuplicates(s);
	string ans2 = solve.removeDuplicatesBetter(s);
	cout << ans << endl;
	cout << ans2 << endl;
	return 0;
}
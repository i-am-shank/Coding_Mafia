#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size(), m = t.size();
        stack<char> s1;
        stack<char> t1;
        for(int i=0; i<n; i++) {
        	if(s[i] != '#') {
        		s1.push(s[i]);
        	}
        	else {
        		if(s1.empty()) {
        			continue;
        		}
        		else {
        			s1.pop();
        		}
        	}
        }
        for(int i=0; i<m; i++) {
        	if(t[i] != '#') {
        		t1.push(t[i]);
        	}
        	else {
        		if(t1.empty()) {
        			continue;
        		}
        		else {
        			t1.pop();
        		}
        	}
        }
        return s1 == t1;
    }
};

int main() {
	string s, t;
	cin >> s >> t;
	Solution solve;
	bool flag = solve.backspaceCompare(s, t);
	cout << (flag == true ? "true" : "false") << endl;
	return 0;
}
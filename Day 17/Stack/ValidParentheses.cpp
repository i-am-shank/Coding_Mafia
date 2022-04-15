#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack <char> stk;
        bool flag = true;
        int n = s.size();
        for(int i=0; i<n; i++) {
        	if(s[i]=='(' || s[i]=='{' || s[i]=='[') {
        		stk.push(s[i]);
        	}
        	else {
        		if(s[i] == ')') {
        			if(!stk.empty()  &&  stk.top() == '(') {
        				stk.pop();
        			}
        			else {
        				flag = false;
        				break;
        			}
        		}
        		else if(s[i] == '}') {
        			if(!stk.empty()  &&  stk.top() == '{') {
        				stk.pop();
        			}
        			else {
        				flag = false;
        				break;
        			}
        		}
        		else if(s[i] == ']') {
        			if(!stk.empty()  &&  stk.top() == '[') {
        				stk.pop();
        			}
        			else {
        				flag = false;
        				break;
        			}
        		}
        	}
        }
        if(flag == false) {
        	return false;
        }
        if(stk.empty()) {
        	return true;
        }
        return false;
    }
};

int main() {
	Solution solve;
	string s;
	cin >> s;
	bool ans = solve.isValid(s);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
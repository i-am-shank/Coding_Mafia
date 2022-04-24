#include <bits/stdc++.h>
#include <string>
#include <stack>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string s, ans = "";
		cin >> s;
		stack<char> ourstack;
		int k = 0;
		if(s[k] == '(') {
			ourstack.push(s[0]);
			k++;
		}
		while(!ourstack.empty()) {
			if(s[k] == ')') {
				while(ourstack.top() != '(') {
					char temp = ourstack.top();
					ans.push_back(temp);
					ourstack.pop();
				}
				ourstack.pop();  //  '(' popped.
				k++;
			}
			else if(s[k]=='+' || s[k]=='*' || s[k]=='/' || s[k]=='-' || s[k]=='(' || s[k]=='^') {
				ourstack.push(s[k]);
				k++;
			}
			else {
				ans.push_back(s[k]);
				k++;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
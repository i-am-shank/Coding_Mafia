#include <bits/stdc++.h>
using namespace std;

class Solution {
	string reverse(string s) {
		string ans="";
		int n=s.size();
		for(int i=n-1; i>=0; i--) {
			ans += s[i];
		}
		return ans;
	}

public:
    string reverseWords(string s) {
    	s += ' ';
        int n = s.size();
        string ans="", w="";
        for(int i=0; i<n; i++) {
        	if(s[i] == ' ') {
        		w = reverse(w);
        		ans += w;
        		w = "";
        		ans += ' ';
        	}
        	else {
        		w += s[i];
        	}
        }
        ans.pop_back();
        return ans;
    }
};

int main() {
	Solution solve;
	string input;
	getline(cin, input);
	string ans = solve.reverseWords(input);
	cout << ans << endl;
	return 0;
}
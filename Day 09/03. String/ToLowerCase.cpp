#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    string toLowerCase(string s) {
        for(int i=0; i<s.size(); i++) {
        	if(s[i]>='A' && s[i]<='Z') {
        		s[i] += 32;
        	}
        }
        return s;
    }
};

int main() {
	string s;
	cin >> s;
	Solution solve;
	string ans = solve.toLowerCase(s);
	cout << ans << endl;
	return 0;
}
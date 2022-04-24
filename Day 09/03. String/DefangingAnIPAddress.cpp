#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(N)
	
    string defangIPaddr(string address) {
        string ans = "";
        for(int i=0; i<address.size(); i++) {
        	if(address[i] == '.') {
        		ans += "[.]";
        	}
        	else {
        		ans += address[i];
        	}
        }
        return ans;
    }
};

int main() {
	Solution solve;
	string s;
	cin >> s;
	string ans = solve.defangIPaddr(s);
	cout << ans << endl;
	return 0;
}
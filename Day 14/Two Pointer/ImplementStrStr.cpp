#include <bits/stdc++.h>
using namespace std;

class Solution {
    // Time Complexity = O(N)
    // Space Complexity = O(N)

public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size(), ans = -1;
        if(m == 0) {
        	return 0;
        }
        for(int i=0; i<=n-m; i++) {
        	string temp = haystack.substr(i,m);
        	if(temp == needle) {
        		ans = i;
        		break;
        	}
        }
        return ans;
    }
};

int main(){
	Solution solve;
	string haystack, needle;
	cin >> haystack >> needle;
	int ans = solve.strStr(haystack, needle);
	cout << ans << endl;
	return 0;
}
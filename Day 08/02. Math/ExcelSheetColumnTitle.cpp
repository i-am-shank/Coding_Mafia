#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(logN)
	// Space Complexity = O(1) 
	
    string convertToTitle(int columnNumber) {
    	string ans = "";
		while(columnNumber != 0) {
			columnNumber --;
			char c = (columnNumber % 26) + 'A';
			ans = c + ans;
			columnNumber /= 26;
		}
		return ans;
    }
};

int main() {
	int n;
	cin >> n;
	Solution solve;
	string ans = solve.convertToTitle(n);
	cout << ans << endl;
	return 0;
}
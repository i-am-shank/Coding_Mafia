#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

class Solution {
public:

	// Time Complexity = O(N)  ..  N is size of string
	// Space Complexity = O(1)

    int titleToNumber(string columnTitle) {
    	int ans = 0;
    	ll multiplier = 1;
    	int n = columnTitle.size();
        while(n > 0) {
        	char c = columnTitle[n-1];
        	ans += (multiplier * (int)((c-'A')+1));
        	multiplier *= 26;
        	n--;
        }
        return ans;
    }
};

int main() {
	Solution solve;
	string input;
	cin >> input;
	int ans = solve.titleToNumber(input);
	cout << ans << endl;
	return 0;
}
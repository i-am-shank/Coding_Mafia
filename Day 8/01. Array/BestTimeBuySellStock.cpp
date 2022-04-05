#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    int maxProfit(vector<int>& prices) {
        int n= prices.size();
        int minV = prices[0], maxDiff = 0;
        for(int i=1; i<n; i++) {
        	int diff = prices[i] - minV;
        	maxDiff = max(maxDiff, diff);
        	minV = min(minV, prices[i]);
        }
        return maxDiff;
    }
};

int main() {
	int n;
	cin >> n;
	vector<int> input;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		input.push_back(ele);
	}
	Solution solve;
	int ans = solve.maxProfit(input);
	cout << ans << endl;
	return 0;
}
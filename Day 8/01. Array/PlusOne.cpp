#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(N)
	
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size(), index = -1;
        for(int i=n-1; i>=0; i--) {
        	if(digits[i] != 9) {
        		index = i;
        		break;
        	}
        }
        if(index != -1) {
        	digits[index] ++;
        	for(int i=index+1; i<n; i++) {
        		digits[i] = 0;
        	}
        	return digits;
        }
        // If all digits are 9  .. Ex : 999. Return 1000.
        vector<int> ans;
        ans.push_back(1);
        for(int i=0; i<n; i++) {
        	ans.push_back(0);
        }
        return ans;
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
	vector<int> ans = solve.plusOne(input);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
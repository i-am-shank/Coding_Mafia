#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)

    int maxSubArray(vector<int>& nums) {  // Kadane's algorithm
        int sum = 0, maxSum = INT_MIN, n = nums.size();
        for(int i=0; i<n; i++) {
        	sum += nums[i];
        	maxSum = max(maxSum, sum);
        	if(sum < 0) {
        		sum = 0;
        	}
        }
        return maxSum;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	vector<int> input;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		input.push_back(ele);
	}
	int sum = solve.maxSubArray(input);
	cout << sum << endl;
	return 0;
}
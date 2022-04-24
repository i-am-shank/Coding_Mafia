#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    int removeElement(vector<int>& nums, int val) {
        int k = 0, n = nums.size();
        for(int i=0; i<n; i++) {
        	if(nums[i] == val) {
        		continue;
        	}
        	nums[k++] = nums[i];
        }
        return k;
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
	int val;
	cin >> val;
	int k = solve.removeElement(input, val);
	for(int i=0; i<k; i++) {
		cout << input[i] << " ";
	}
	cout << endl;
	return 0;
}
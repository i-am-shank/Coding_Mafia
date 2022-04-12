#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)

    void moveZeroes(vector<int>& nums) {
        int n = nums.size(), k=0;
        for(int i=0; i<n; i++) {
        	if(nums[i] != 0) {
        		nums[k++] = nums[i];
        	}
        }
        for(int i=k; i<n; i++) {
        	nums[i] = 0;
        }
        return;
    }
};

int main() {
	vector<int> nums;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	Solution solve;
	solve.moveZeroes(nums);
	for(int i=0; i<n; i++) {
		cout << nums[i] << " ";
	}
	cout << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int n = nums.size();
        for(int i=0; i<n; i++) {
        	minHeap.push(nums[i]);
        	if(minHeap.size() > k) {
        		minHeap.pop();
        	}
        }
        return minHeap.top();
    }
};

int main() {
	int k, n;
	cin >> k >> n;
	vector<int> nums;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	Solution solve;
	int ans = solve.findKthLargest(nums, k);
	cout << ans << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class KthLargest {
public:
	priority_queue<int, vector<int>, greater<int>> minHeap;
	int kval;

	int reOrder(int ele) {
		minHeap.push(ele);
		while(minHeap.size() > kval) {
			minHeap.pop();
		}
		return minHeap.top();
	}

    KthLargest(int k, vector<int>& nums) {
        // As we have to store k-largest elements.. top will be the smallest.. i.e. kth largest
        // Use minHeap
        kval = k;
        for(int i=0; i<nums.size(); i++) {
        	int temp = reOrder(nums[i]);
        }
    }
    
    int add(int val) {
    	return reOrder(val);
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
	KthLargest solve(k, nums);  // User-defined constructor
	int m;  // No. of extra elements additions.. add() funct. call
	cin >> m;
	for(int i=0; i<m; i++) {
		int ele;
		cin >> ele;
		int ans = solve.add(ele);
		cout << ans << endl;
	}
	return 0;
}
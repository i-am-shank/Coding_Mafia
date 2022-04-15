#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1;
        while(s <= e) {
        	int mid = s + ((e-s)/2);
        	if(nums[mid] == target) {
        		return mid;
        	}
        	else if(nums[mid] > target) {
        		e = mid-1;
        	}
        	else {
        		s = mid+1;
        	}
        }
        return -1;
    }
};

int main() {
	Solution solve;
	vector<int> nums;
	int n, target;
	cin >> n;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	cin >> target;
	int ans = solve.search(nums, target);
	cout << ans << endl;
	return 0;
}
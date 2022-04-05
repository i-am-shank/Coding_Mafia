#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(log N)
	// Space Complexity = O(1)
	
	int search(vector<int>& nums, int s, int e, int target) {
		int ans;
		while(s <= e) {
			int mid = (s+e) / 2;
			if(nums[mid] == target) {
				ans = mid;
				break;
			}
			else if(nums[mid] < target) {
				s = mid+1;
				ans = s;
			}
			else {
				e = mid-1;
				ans = s;
			}
		}
		return ans;
	}

    int searchInsert(vector<int>& nums, int target) {
    	int n = nums.size();
        int ans = search(nums, 0, n-1, target);
        return ans;
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
	int target;
	cin >> target;
	int ans = solve.searchInsert(input, target);
	cout << ans << endl;
	return 0;
}
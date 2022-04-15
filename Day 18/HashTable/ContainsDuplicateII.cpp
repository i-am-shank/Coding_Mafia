#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> lastIndex;
        int n = nums.size();
        for(int i=0; i<n; i++) {
        	if(lastIndex.find(nums[i]) != lastIndex.end()) {
        		if(i - lastIndex[nums[i]] <= k) {
        			return true;
        		}
        	}
        	lastIndex[nums[i]] = i;
        }
        return false;
    }
};

int main (){
	Solution solve;
	int n;
	cin >> n;
	vector<int> nums;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	int k;
	cin >> k;
	bool ans = solve.containsNearbyDuplicate(nums, k);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
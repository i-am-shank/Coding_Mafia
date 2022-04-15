#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> ourmap;
        bool ans = false;
        int n = nums.size();
        for(int i=0; i<n; i++) {
        	if(ourmap.find(nums[i]) != ourmap.end()) {
        		ans = true;
        		break;
        	}
        	ourmap[nums[i]]++;
        }
        return ans;
    }
};

int main() {
	int n;
	cin >> n;
	vector<int> nums;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	Solution solve;
	bool ans = solve.containsDuplicate(nums);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
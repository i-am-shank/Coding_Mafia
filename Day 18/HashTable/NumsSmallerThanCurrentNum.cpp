#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> temp = nums;
        int n = nums.size();
        sort(temp.begin(), temp.end());
        unordered_map<int, int> ansArr;
        int count = 0;
        for(int i=0; i<n; i++) {
        	if(i > 0) {
        		if(temp[i] != temp[i-1]) {
        			count = i;
        		}
        	}
        	ansArr[temp[i]] = count;
        }
        vector<int> ans(n);
        for(int i=0; i<n; i++) {
        	ans[i] = ansArr[nums[i]];
        }
        return ans;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	vector<int> nums;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	vector<int> ans = solve.smallerNumbersThanCurrent(nums);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
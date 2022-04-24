#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N^2)
	// Space Complexity = O(1)

    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        bool flag = false;
        for(int i=0; i<n-1; i++) {
        	for(int j=i+1; j<n; j++) {
        		if(nums[i] + nums[j] == target) {
        			ans.push_back(i);
        			ans.push_back(j);
        			flag = true;
        			break;
        		}
        	}
        	if(flag == true){
        		break;
        	}
        }
        return ans;
    }

    // Time Complexity = O(N)
    // Space Complexity = O(N)

    vector<int> twoSumBetter(vector<int> &nums, int target) {
    	unordered_map<int, int> m;
    	vector<int> ans;
    	int n = nums.size();
    	for(int i=0; i<n; i++) {
    		if(m.find(target-nums[i]) != m.end()) {
    			ans.push_back(i);
    			ans.push_back(m[target-nums[i]]);
    			break;
    		}
    		else {
    			m[nums[i]] = i;
    		}
    	}
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
	vector<int> ans = solve.twoSum(input, target);
	vector<int> ans2 = solve.twoSumBetter(input, target);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	for(int i=0; i<ans2.size(); i++) {
		cout << ans2[i] << " ";
	}
	cout << endl;
	return 0;
}
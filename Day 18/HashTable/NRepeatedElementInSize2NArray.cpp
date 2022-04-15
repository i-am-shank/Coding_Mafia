#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int n = nums.size();
        for(int i=0; i<n; i++) {
        	if(freqMap.find(nums[i]) != freqMap.end()) {
        		freqMap[nums[i]] ++;
        	}
        	else {
        		freqMap[nums[i]] = 1;
        	}
        	if(freqMap[nums[i]] > 1) {
        		return nums[i];
        	}
        }
        unordered_map<int, int> :: iterator it;
        int ans;
        for(it=freqMap.begin(); it!=freqMap.end(); it++) {
        	if(it->second == n/2) {
        		ans = it->first;
        	}
        }
        return ans;
    }
};

int main() {
	Solution solve;
	vector<int> nums;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums.push_back(ele);
	}
	int ans = solve.repeatedNTimes(nums);
	cout << ans << endl;
	return 0;
}
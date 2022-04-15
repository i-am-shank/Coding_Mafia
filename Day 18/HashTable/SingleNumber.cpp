#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Method 2

	int singleNumber2(vector<int>& nums) {
		int n = nums.size(), ans;
		unordered_set<int> s;
		int numsSum = 0;
		for(int i=0; i<n; i++) {
			s.insert(nums[i]);
			numsSum += nums[i];
		}
		int sum = 0;
		unordered_set<int> :: iterator it;
		for(it=s.begin(); it!=s.end(); it++) {
			sum += *it;
		}
		ans = (2*sum) - numsSum;
		return ans;
	}

    int singleNumber(vector<int>& nums) {
    	int n = nums.size(), ans;
        unordered_map<int, int> freqMap;
        for(int i=0; i<n; i++) {
        	freqMap[nums[i]]++;
        }
        unordered_map<int, int> :: iterator it;
        for(it=freqMap.begin(); it!=freqMap.end(); it++) {
        	if(it->second == 1) {
        		ans = it->first;
        		break;
        	}
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
	int ans = solve.singleNumber2(nums);
	cout << ans << endl;
	return 0;
}
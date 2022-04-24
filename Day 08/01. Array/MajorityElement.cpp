#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> m;
        for(int i=0; i<n; i++) {
        	if(m.find(nums[i]) != m.end()) {
        		m[nums[i]] ++;
        	}
        	else {
        		m[nums[i]] = 1;
        	}
        }
        int maxFreq = 0, maxEle;
        unordered_map <int, int> :: iterator it;
        for(it=m.begin(); it!=m.end(); it++) {
        	if(it->second > maxFreq) {
        		maxFreq = it->second;
        		maxEle = it->first;
        	}
        }
        return maxEle;
    }
};

int main() {
	int n;
	cin >> n;
	vector<int> input;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		input.push_back(ele);
	}
	Solution solve;
	int ans = solve.majorityElement(input);
	cout << ans << endl;
	return 0;
}
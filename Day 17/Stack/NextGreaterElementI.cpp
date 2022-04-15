#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
	vector<int> nextGreater(vector<int> nums2) {
		stack<int> stk;
		int n = nums2.size();
		vector<int> ans(n);  // Declaring vector of size n.
		for(int i=n-1; i>=0; i--) {
			while(!stk.empty()  &&  stk.top()<nums2[i]) {  // Remove all possible smaller elements
				stk.pop();
			}
			if(stk.empty()) {  // Next Greater element doesn't exists
				ans[i] = -1;
			}
			else {  // Exists.. Element greater than current element, which comes after element
				ans[i] = stk.top();
			}
			stk.push(nums2[i]);
		}
		return ans;
	}

public:

	// Time Complexity = O(N)  ..  O(N) for making nextGreater vector .. O(N) for making map
	// Space Complexity = O(N)

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> greaterMap;
        vector<int> ng = nextGreater(nums2);  // ng is of same size as that of nums2.
        for(int i=0; i<ng.size(); i++) {
        	greaterMap[nums2[i]] = ng[i];
        }
        int n1 = nums1.size();
        vector<int> ans(n1);
        for(int i=0; i<n1; i++) {
        	ans[i] = greaterMap[nums1[i]];
        }
        return ans;
    }
};

int main() {
	vector<int> nums1, nums2;
	int n1, n2;
	cin >> n1 >> n2;
	for(int i=0; i<n1; i++) {
		int ele;
		cin >> ele;
		nums1.push_back(ele);
	}
	for(int i=0; i<n2; i++) {
		int ele;
		cin >> ele;
		nums2.push_back(ele);
	}
	Solution solve;
	vector<int> ans = solve.nextGreaterElement(nums1, nums2);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}
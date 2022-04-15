#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s;
        sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
        int i=0, j=0, s1=nums1.size(), s2=nums2.size();
        // ..........
        while(i<s1 && j<s2) {
        	if(nums1[i] == nums2[j]) {
        		s.insert(nums1[i]);
        		i++;
        		j++;
        	}
        	else {
        		if(nums1[i] < nums2[j]) {
        			i++;
        		}
        		else {
        			j++;
        		}
        	}
        }
        vector<int> ans;
        unordered_set<int> :: iterator it;
        for(it=s.begin(); it!=s.end(); it++) {
        	ans.push_back(*it);
        }
        return ans;
    }
};

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> nums1;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		nums1.push_back(ele);
	}
	vector<int> nums2;
	for(int i=0; i<m; i++) {
		int ele;
		cin >> ele;
		nums2.push_back(ele);
	}
	Solution solve;
	vector<int> ans = solve.intersection(nums1, nums2);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    	vector<int> ans;
        sort(nums1.begin(), nums1.end());
		sort(nums2.begin(), nums2.end());
        int i=0, j=0, s1=nums1.size(), s2=nums2.size();
        while(i<s1 && j<s2) {
        	if(nums1[i] == nums2[j]) {
        		ans.push_back(nums1[i]);
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
	vector<int> ans = solve.intersect(nums1, nums2);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
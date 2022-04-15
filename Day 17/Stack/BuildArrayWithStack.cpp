#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(N)
	
    vector<string> buildArray(vector<int>& target, int n) {
        int i=0, m=target.size(), j=1;
        vector<string> ans;
        while(i<m && j<=n) {
        	// Push j into the array
        	ans.push_back("Push");
        	// Compare with ith element of target
        	// If matched, move to operation of next target element
        	if(target[i] == j) {
        		j++;
        		i++;
        	}
        	// Else, pop the element
        	else {
        		j++;
        		ans.push_back("Pop");
        	}
        }
        return ans;
    }
};

int main() {
	int n;
	cin >> n;
	vector<int> target;
	int size;
	cin >> size;
	for(int i=0; i<size; i++) {
		int ele;
		cin >> ele;
		target.push_back(ele);
	}
	Solution solve;
	vector<string> ans = solve.buildArray(target, n);
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
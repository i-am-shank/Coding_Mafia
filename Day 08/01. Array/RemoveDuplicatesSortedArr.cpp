#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)

    int removeDuplicates(vector<int>& nums) {
        int k = 0, prev, n = nums.size();
        for(int i=0; i<n; i++) {
        	if(i == 0) {
        		prev = nums[0];
        		k++;
        	}
        	else {
        		if(nums[i] != prev) {
        			nums[k++] = nums[i];
        			prev = nums[i];
        		}
        	}
        }
        return k;
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
	int k = solve.removeDuplicates(input);
	for(int i=0; i<k; i++) {
		cout << input[i] << " ";
	}
	cout << endl;
	return 0;
}
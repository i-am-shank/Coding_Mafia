#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    vector<int> twoSum(vector<int>& numbers, int target) {
    	int n = numbers.size();
        int index1 = 0, index2 = n-1;
        vector<int> ans;
        while(index1 < index2) {
        	int sum = numbers[index1] + numbers[index2];
        	if(sum == target) {
        		ans.push_back(index1+1);
        		ans.push_back(index2+1);
        		break;
        	}
        	else if(sum > target) {
        		index2--;
        	}
        	else {
        		index1++;
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
	for(int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
	return 0;
}
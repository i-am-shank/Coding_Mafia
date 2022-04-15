#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(N)
	
    int calPoints(vector<string>& ops) {
        int n = ops.size();
        stack<int> scores; 
        for(int i=0; i<n; i++) {
        	if(ops[i] == "C") {  // Clear last score
        		scores.pop();
        	}
        	else if(ops[i] == "D") {  // Add double of last score
        		int lastScore = scores.top();
        		scores.push(2 * lastScore);
        	}
        	else if(ops[i] == "+") {  // Add addition of last two scores.
        		int l1 = scores.top();
        		scores.pop();
        		int l2 = scores.top();
        		scores.push(l1);
        		scores.push(l1 + l2);
        	}
        	else {
        		int newScore = stoi(ops[i]);
        		scores.push(newScore);
        	}
        }
        int totalScore = 0;
        while(!scores.empty()) {
        	totalScore += scores.top();
        	scores.pop();
        }
        return totalScore;
    }
};

int main() {
	vector<string> ops;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		string s;
		cin >> s;
		ops.push_back(s);
	}
	Solution solve;
	int ans = solve.calPoints(ops);
	cout << ans << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> answer(n);
		stack<pair<int,int>> stk;
        for(int i=n-1; i>=0; i--) {
        	while(!stk.empty()  &&  stk.top().first<=temperatures[i]) {
        		stk.pop();
        	}
        	if(stk.empty()) {
        		answer[i] = 0;
        	}
        	else {
        		answer[i] = stk.top().second - i;
        	}
        	stk.push(make_pair(temperatures[i], i));
        }
        return answer;
    }
};

int main() {
	Solution solve;
	vector<int> temperatures;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		temperatures.push_back(ele);
	}
	vector<int> answer = solve.dailyTemperatures(temperatures);
	int t = answer.size();
	for(int i=0; i<t; i++) {
		cout << answer[i] << " ";
	}
	cout << endl;
	return 0;
}
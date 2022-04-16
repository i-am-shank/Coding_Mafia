#include <bits/stdc++.h>
#include <queue>
using namespace std;

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;  // stores maximum element at top.
        int n = stones.size();
        for(int i=0; i<n; i++) {
        	maxHeap.push(stones[i]);
        }
        while(maxHeap.size() > 1) {
        	int maxEle = maxHeap.top();
        	maxHeap.pop();
        	int secMaxEle = maxHeap.top();
        	maxHeap.pop();
        	if(maxEle != secMaxEle) {
        		int diff = maxEle - secMaxEle;
        		maxHeap.push(diff);
        	}
        }
        if(maxHeap.size() == 1) {
        	return maxHeap.top();
        }
        return 0;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	vector<int> stones;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		stones.push_back(ele);
	}
	int ans = solve.lastStoneWeight(stones);
	cout << ans << endl;
	return 0;
}
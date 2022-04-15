#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int, int> ourmap;
        int jsize = jewels.size(), ssize = stones.size();
        for(int i=0; i<jsize; i++) {
        	ourmap[jewels[i]] = 1;
        }
        int count = 0;
        for(int i=0; i<ssize; i++) {
        	if(ourmap.find(stones[i]) != ourmap.end()) {
        		count++;
        	}
        }
        return count;
    }
};

int main() {
	Solution solve;
	string jewels, stones;
	cin >> jewels >> stones;
	int ans = solve.numJewelsInStones(jewels, stones);
	cout << ans << endl;
	return 0;
}
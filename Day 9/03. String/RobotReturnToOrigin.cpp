#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for(int i=0; i<moves.size(); i++) {
        	if(moves[i] == 'L') {
        		x--;
        	}
        	else if(moves[i] == 'R') {
        		x++;
        	}
        	else if(moves[i] == 'U') {
        		y++;
        	}
        	else if(moves[i] == 'D') {
        		y--;
        	}
        }
        if(x==0 && y==0) {
        	return true;
        }
        return false;
    }
};

int main() {
	Solution solve;
	string s;
	cin >> s;
	bool ans = solve.judgeCircle(s);
	cout << (ans == true ? "true":"false") << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans = letters[0];
        int diff, minDiff = 27, n = letters.size();
        for(int i=0; i<n; i++) {
        	if(letters[i] > target) {
        		diff = letters[i] - target;
        	}
        	else {
        		diff = ('z' - target) + (letters[i] - 'a') + 1;  // +1 done for 'a' to 'z' transit.
        	}
        	if(diff < minDiff  &&  diff != 0) {
        		minDiff = diff;
        		ans = letters[i];
        	}
        }
        return ans;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	vector<char> letters;
	for(int i=0; i<n; i++) {
		char c;
		cin >> c;
		letters.push_back(c);
	}
	char target;
	cin >> target;
	char ans = solve.nextGreatestLetter(letters, target);
	cout << ans << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {

public:
    string reverseWords(string s) {
    	// Remove spaces in begining
    	while(s[0] == ' ') {
    		s.erase(0, 1);  // erase starting from 0 index.. to size 1.
    	}

    	// Remove spaces from end
    	while(s[s.size()-1] == ' ') {
    		s.erase(s.size()-1, 1);  // erase starting from s.size()-1 index.. to size 1.
    	}

    	// Remove extra spaces in middle
    	int spaceCount = 0;
    	for(int i=0; i<s.size(); i++) {  // Counting consecutive spaces
    		if(s[i] == ' ') {
    			spaceCount++;
    		}
    		else {
    			spaceCount = 0;
    		}
    		if(spaceCount > 1) {  // Extra space found
    			s.erase(i, 1);
    			i--;  // Continue counting from this index.. in next iteration
    		}
    	}

    	// Now.. first reversing whole sentence.. then reversing each word.
    	// We will get our desired result
    	
    	reverse(s.begin(), s.end());
        int n = s.size(), left=0;
		for(int i=1; i<n; i++) {
        	if(s[i] == ' ') {
        		reverse(s.begin()+left, s.begin()+i);
        		left = i+1;
        	}
        	else if(i == n-1) {
        		reverse(s.begin()+left, s.begin()+i+1);
        	}
        }
        return s;
    }
};

int main() {
	string s;
	getline(cin, s);
	Solution solve;
	string ans = solve.reverseWords(s);
	cout << ans << endl;
	return 0;
}
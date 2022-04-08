#include <bits/stdc++.h>
using namespace std;

class Solution {
	bool isPalindrome(string s, int b, int e) {
		while(b < e) {
			if(s[b] == s[e]) {
				b++;
				e--;
			}
			else {
				return false;
			}
		}
		return true;
	}

public:

	// Time Complexity = O(N)
	// Space Complexity = O(N)

    bool validPalindrome(string s) {
    	int n = s.size();
        int b=0, e = n-1;
        while(b < e) {
        	if(s[b] == s[e]) {
        		b++;
        		e--;
        	}
        	else {
        		bool ans1 = isPalindrome(s, b+1, e);
        		bool ans2 = isPalindrome(s, b, e-1);
        		return (ans1 || ans2);
        	}
        }
        return true;
    }
};

int main() {
	string s;
	cin >> s;
	Solution solve;
	bool ans = solve.validPalindrome(s);
	cout << (ans==true? "true":"false") << endl;
	return 0;
}
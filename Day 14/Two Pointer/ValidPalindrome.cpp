#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
	bool isValid(char c) {
		if((c>='A' && c<='Z')  ||  (c>='a' && c<='z')  ||  (c>='0' && c<='9')) {
			return true;
		}
		return false;
	}

	char lowerCase(char c) {
		if((c>='a' && c<='z')  ||  (c>='0' && c<='9')) {
			return c;
		}
		else {
			return (c - 'A') + 'a';
		}
	}

	bool palindrome(string s) {
		int n = s.size();
		int i=0, j=n-1;
		bool flag = true;
		while(i < j) {
			if(s[i] != s[j]) {
				flag = false;
				break;
			}
			i++;
			j--;
		}
		return flag;
	}

public:

	// Time Complexity = O(N)
	// Space Complexity = O(N)
	
    bool isPalindrome(string s) {
        string input = "";
        int n = s.size();
        for(int i=0; i<n; i++) {
        	if(isValid(s[i])) {
        		input += lowerCase(s[i]);
        	}
        }
        return palindrome(input);
    }
};

int main(){
	Solution solve;
	string input;
	getline(cin, input);
	bool ans = solve.isPalindrome(input);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
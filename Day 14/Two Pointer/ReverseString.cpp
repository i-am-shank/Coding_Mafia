#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
    void reverseString(vector<char>& s) {
        int n = s.size();
        int i = 0, j = n-1;
        while(i < j) {
        	char temp = s[i];
        	s[i] = s[j];
        	s[j] = temp;
        	i++;
        	j--;
        }
        return;
    }
};

int main() {
	vector<char> s;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		char c;
		cin >> c;
		s.push_back(c);
	}
	Solution solve;
	solve.reverseString(s);
	for(int i=0; i<n; i++) {
		cout << s[i] << " ";
	}
	cout << endl;
	return 0;
}
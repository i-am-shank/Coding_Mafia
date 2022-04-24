#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(logN)
	// Space Complexity = O(1)
	
    bool isPowerOfTwo(int n) {
        int i=0;
        while(pow(2,i) < n) {
        	i++;
        }
        if(pow(2,i) == n) {
        	return true;
        }
        return false;
    }
};

int main() {
	int n;
	cin >> n;
	Solution solve;
	bool ans = solve.isPowerOfTwo(n);
	cout << (ans == true ? "true":"false") << endl;
	return 0;
}
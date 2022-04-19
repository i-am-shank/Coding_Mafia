#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseStr(string s, int k) {
        int count = 1, n=s.size();
        for(int i=0; i<n; i+=(2*k)) {
        	if(i+k <= n) {
        		reverse(s.begin()+i , s.begin()+i+k);
        	}
        	else{
        		reverse(s.begin()+i, s.end());
        	}
        }
        return s;
    }
};

int main() {
	Solution solve;
	string s;
	cin >> s;
	int k;
	cin >> k;
	string ans = solve.reverseStr(s, k);
	cout << ans << endl;
	return 0;
}
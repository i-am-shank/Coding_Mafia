#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N)
	// Space Complexity = O(1)
	
	// balloon  .. b, a, l, o, n
    int maxNumberOfBalloons(string text) {
        int cb=0, ca=0, cl=0, co=0, cn=0;
        for(int i=0; i<text.size(); i++) {
        	if(text[i] == 'b') {
        		cb++;
        	}
        	else if(text[i] == 'a') {
        		ca++;
        	}
        	else if(text[i] == 'l') {
        		cl++;
        	}
        	else if(text[i] == 'o') {
        		co++;
        	}
        	else if(text[i] == 'n') {
        		cn++;
        	}
        }
        cl /= 2;
        co /= 2;
        int arr[5] = {cb, ca, cl, co, cn};
        int minV = arr[0];
        for(int i=1; i<5; i++) {
        	minV = min(minV, arr[i]);
        }
        return minV;
    }
};

int main() {
	string s;
	cin >> s;
	Solution solve;
	int ans = solve.maxNumberOfBalloons(s);
	cout << ans << endl;
	return 0;
}
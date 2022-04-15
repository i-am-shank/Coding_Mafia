#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
    	int n = name.size(), t = typed.size();
        int i = 0, j = 0;
        while(i<n && j<t) {
            if(name[i] == typed[j]) {
                i++;
                j++;
            }
            else if(j!=0 && typed[j] == typed[j-1]) {
                j++;
            }
            else {
                return false;
            }
        }
        while(j < t) {
            if(typed[j] == typed[j-1]) {
                j++;
            }
            else {
                return false;
            }
        }
        return (i == n);  // whether whole name string traversed or not.
    }
};

int main() {
	Solution solve;
	string name, typed;
	cin >> name >> typed;
	bool ans = solve.isLongPressedName(name, typed);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
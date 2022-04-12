#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
    	unordered_map<char, int> freqName;
    	unordered_map<char, int> freqTyped;
        int n=typed.size();
        for(int i=0; i<n; i++) {
        	if(freqTyped.find(typed[i]) != freqTyped.end()) {
        		freqTyped[typed[i]] ++;
        	}
        	else {
        		freqTyped[typed[i]] = 1;
        	}
        }
        int m = name.size();
        for(int i=0; i<m; i++) {
        	if(freqName.find(name[i]) != freqName.end()) {
        		freqName[name[i]] ++;
        	}
        	else {
        		freqName[name[i]] = 1;
        	}
        }
        bool flag = true;
        for(int i=0; i<m; i++) {
        	if(freqName[name[i]] > freqTyped[name[i]]) {
        		flag = false;
        		break;
        	}
        }
        return flag;
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
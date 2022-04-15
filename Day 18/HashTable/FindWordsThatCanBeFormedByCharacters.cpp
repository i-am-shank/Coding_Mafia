#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0, n = words.size(), m = chars.size();
        unordered_map<char, int> freqMap;
        for(int i=0; i<m; i++) {
    		freqMap[chars[i]]++;
        }
        for(int i=0; i<n; i++) {
        	int t = words[i].size();
        	unordered_map<char, int> temp;
        	for(int j=0; j<t; j++) {
        		temp[words[i][j]]++;
        	}
        	unordered_map<char, int> :: iterator it;
        	bool flag = true;
        	for(it=temp.begin(); it!=temp.end(); it++) {
        		char c = it->first;
        		int freq = it->second;
        		if(freq > freqMap[c]) {
        			flag = false;
        			break;
        		}
        	}
        	if(flag == true) {
        		ans += t;
        	}
        }
        return ans;
    }
};

int main() {
	int n;
	cin >> n;
	vector<string> words;
	for(int i=0; i<n; i++) {
		string s;
		cin >> s;
		words.push_back(s);
	}
	string chars;
	cin >> chars;
	Solution solve;
	int ans = solve.countCharacters(words, chars);
	cout << ans << endl;
	return 0;
}
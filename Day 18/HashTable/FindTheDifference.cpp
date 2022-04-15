#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> smap;
        unordered_map<char, int> tmap;
        char ans;
        int ssize = s.size(), tsize = t.size();
        for(int i=0; i<ssize; i++) {
        	smap[s[i]]++;
        }
        for(int i=0; i<tsize; i++) {
        	tmap[t[i]]++;
        }
        unordered_map<char, int> :: iterator it;
        for(it=tmap.begin(); it!=tmap.end(); it++) {
        	if(it->second > smap[it->first]) {
        		ans = it->first;
        		break;
        	}
        }
        return ans;
    }
};

int main() {
	Solution solve;
	string s, t;
	cin >> s >> t;
	char ans = solve.findTheDifference(s, t);
	cout << ans << endl;
	return 0;
}
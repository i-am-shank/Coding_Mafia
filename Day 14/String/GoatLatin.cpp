#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Solution {
	bool isVowel(char c) {
		unordered_set<char> s = {'a','e','i','o','u','A','E','I','O','U'};
		if(s.find(c) != s.end()) {
			return true;
		}
		return false;
	}

public:
    string toGoatLatin(string sentence) {
    	sentence += ' ';
    	string s="", w="";  // s --> sentence ans, w --> word ans
        int n = sentence.size(), countWords = 0;
        for(int i=0; i<n; i++) {
        	if(sentence[i] == ' ') {
        		countWords ++;
        		// .....
        		if(isVowel(w[0])) {
        			w += "ma";
        		}
        		else {
        			string temp = w.substr(1) + w[0] + "ma";
        			w = temp;
        		}
        		for(int j=0; j<countWords; j++) {
        			w += 'a';
        		}
        		s += w;  // Adding ans-word to ans-sentence.
        		s += ' ';  // Adding space after each word  ..  in end, there will be extra space.
        		w = "";
        	}
        	else {
        		w += sentence[i];
        	}
        }
        s.pop_back();
        return s;
    }
};

int main() {
	string s;
	getline(cin, s);
	Solution solve;
	string ans = solve.toGoatLatin(s);
	cout << ans << endl;
	return 0;
}
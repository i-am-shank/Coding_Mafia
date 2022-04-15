#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Memoization approach
    bool isSubsequenceMem(string s, string t, int **arr) {
        int n = s.size(), m = t.size();
        if(arr[n][m] != -1) {
            if(arr[n][m] == 1) {
                return true;
            }
            return false;
        }
        if(n > m) {
            arr[n][m] = 0;
            return false;
        }
        else if(n == m) {
            if(s == t) {
                arr[n][m] = 1;
            }
            else {
                arr[n][m] = 0;
            }
            return (s == t);
        }
        else if(n == 0) {
            arr[n][m] = 1;
            return true;
        }
        else {
            bool smallAns1 = false, smallAns2 = false;
            if(s[0] == t[0]) {
                smallAns1 = isSubsequenceMem(s.substr(1), t.substr(1), arr);
            }
            smallAns2 = isSubsequenceMem(s, t.substr(1), arr);
            if(smallAns1 || smallAns2) {
                arr[n][m] = 1;
                return true;
            }
            arr[n][m] = 0;
            return false;
        }
    }

    // Iterative approach
    bool isSubsequenceDp(string s, string t, int **arr) {
        int n = s.size(), m = t.size();
        for(int j=0; j<m+1; j++) {  // when string s is of 0 length .. always a substring
            arr[0][j] = 1;
        }
        for(int i=1; i<n+1; i++) {  // when string t is of 0 length .. almost never a superstring
            arr[i][0] = 0;                // .. except when string s is also of 0 length
        }
        for(int i=1; i<n+1; i++) {
            for(int j=1; j<m+1; j++) {
                if(arr[i][j-1] == 1) {  // if already a substring of just smaller substring of t
                    arr[i][j] = 1;           // ..will be a substring of this too.
                }
                else {
                    if(arr[i-1][j-1] == 1) {  // If just smaller substrings fulfill condition.. 
                        if(s[i-1] == t[j-1]) {        // ..compare the last characters.
                            arr[i][j] = 1;
                        }
                        else {
                            arr[i][j] = 0;
                        }
                    }
                    else {
                        arr[i][j] = 0;  // Else never will be a substring.
                    }
                }
            }
        }
        if(arr[n][m] == 1) {
            return true;
        }
        return false;
    }

    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();
        int** arr = new int*[n+1];
        for(int i=0; i<n+1; i++) {
            arr[i] = new int[m+1];
            for(int j=0; j<m+1; j++) {
                arr[i][j] = -1;
            }
        }
        bool ans = isSubsequenceDp(s, t, arr);
        for(int i=0; i<n+1; i++) {
            delete []arr[i];
        }
        delete []arr;
        return ans;
    }

    // Recursion approach
    bool isSubsequenceRec(string s, string t) {  // is s subsequence of t
        int n = s.size(), m = t.size();
        if(n > m) {
        	return false;
        }
        else if(n == m) {
        	return (s == t);
        }
        else if(n == 0) {
            return true;
        }
        else {
            bool smallAns1 = false, smallAns2 = false;
            if(s[0] == t[0]) {
                smallAns1 = isSubsequence(s.substr(1), t.substr(1));
            }
        	smallAns2 = isSubsequence(s, t.substr(1));
            return (smallAns1 || smallAns2);
        }
    }
};

int main() {
	string s, t;
	cin >> s >> t;
	Solution solve;
	bool ans = solve.isSubsequence(s, t);
	cout << (ans == true ? "true" : "false") << endl;
    
	return 0;
}
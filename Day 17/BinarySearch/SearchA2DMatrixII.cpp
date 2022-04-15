#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

	// Time Complexity = O(N) .. where N is larger dimention of matrix.
	// Space Complexity = O(1)

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        if(m == 0) {
        	return false;
        }
        int n = matrix[0].size();
        int i=0 , j=n-1;
        bool flag = false;
        while(i>=0 && i<m && j>=0 && j<n) {
        	if(matrix[i][j] == target) {
        		flag = true;
        		break;
        	}
        	else if(matrix[i][j] > target) {
        		j--;
        	}
        	else {
        		i++;
        	}
        }
        return flag;
    }
};

/*
5 5
1 4 7 11 15
2 5 8 12 19
3 6 9 16 22
10 13 14 17 24
18 21 23 26 30
5
*/

int main() {
	Solution solve;
	vector<vector<int>> matrix;
	int m, n;
	cin >> m >> n;
	for(int i=0; i<m; i++) {
		vector<int> temp;
		for(int j=0; j<n; j++) {
			int ele;
			cin >> ele;
			temp.push_back(ele);
		}
		matrix.push_back(temp);
	}
	int target;
	cin >> target;
	bool ans = solve.searchMatrix(matrix, target);
	cout << (ans == true ? "true" : "false") << endl;
	return 0;
}
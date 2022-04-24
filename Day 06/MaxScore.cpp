#include <bits/stdc++.h>
using namespace std;

int maxScore(int **arr, int n) {
	int score[n][n] = {0};
	int ans = INT_MIN;
	for(int i=0; i<n; i++) {
		score[i][0] = arr[i][0];
	}
	for(int i=0; i<n; i++) {
		for(int j=1; j<n; j++) {
			int x1=INT_MIN, x2=score[i][j-1], x3=INT_MIN;
			if(i != 0) {
				x1 = score[i-1][j-1];
			}
			if(i != n-1) {
				x3 = score[i+1][j-1];
			}
			score[i][j] = arr[i][j] + max(x1, max(x2, x3));
		}
	}
	for(int i=0; i<n; i++) {
		ans = max(ans, score[i][n-1]);
	}
	return ans;
}

/* 
4
8 8 1 2
-2 -1 -100 -1
-3 0 0 -1
4 1 1 100
*/ 

int main() {
	int n;
	cin >> n;
	int **arr = new int*[n];
	for(int i=0; i<n; i++) {
		arr[i] = new int[n];
		for(int j=0; j<n; j++) {
			cin >> arr[i][j];
		}
	}
	int ans = maxScore(arr, n);
	/*for(int i=0; i<n; i++) {
		delete []arr[i];
	}
	delete []arr;*/
	cout << ans << endl;
	return 0;
}
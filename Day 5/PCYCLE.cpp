#include <bits/stdc++.h>
using namespace std;

void printPermut(int *arr, int n) {
	bool flag[n+1];
	for(int i=0; i<=n; i++) {
		flag[i] = false;
	}
	vector<vector<int>> ans;
	for(int i=1; i<=n; i++) {
		if(flag[i] == false) {
			vector<int> v;
			int begin = i, j=i;
			flag[j] = true;
			v.push_back(j);
			while(begin != arr[j]) {
				v.push_back(arr[j]);
				j = arr[j];
				flag[j] = true;
			}
			v.push_back(arr[j]);
			ans.push_back(v);
		}
	}
	cout << ans.size() << endl;
	for(int i=0; i<ans.size(); i++) {
		for(int j=0; j<ans[i].size(); j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return;
}

int main() {
	int n;
	cin >> n;
	int *arr = new int[n+1];
	for(int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	printPermut(arr, n);
	delete []arr;
	return 0;
}
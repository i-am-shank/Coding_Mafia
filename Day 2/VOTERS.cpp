#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	int *list1 = new int[n1];
	int *list2 = new int[n2];
	int *list3 = new int[n3];
	int maxV = INT_MIN;
	for(int i=0; i<n1; i++) {
		cin >> list1[i];
		maxV = max(maxV, list1[i]);
	}
	for(int i=0; i<n2; i++) {
		cin >> list2[i];
		maxV = max(maxV, list2[i]);
	}
	for(int i=0; i<n3; i++) {
		cin >> list3[i];
		maxV = max(maxV, list3[i]);
	}
	int *freq = new int[maxV+1];
	for(int i=0; i<maxV+1; i++) {
		freq[i] = 0;
	}
	for(int i=0; i<n1; i++) {
		freq[list1[i]]++;
	}
	for(int i=0; i<n2; i++) {
		freq[list2[i]]++;
	}
	for(int i=0; i<n3; i++) {
		freq[list3[i]]++;
	}
	vector<int> list;
	for(int i=0; i<=maxV; i++) {
		if(freq[i] >= 2) {
			list.push_back(i);
		}
	}
	cout << list.size() << endl;
	for(int i=0; i<list.size(); i++) {
		cout << list[i] << endl;
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int s = 0, e = n-1, ans;
        while(s < e) {
        	int mid = s + ((e-s)/2);
        	if(arr[mid] > arr[mid+1]) {
        		ans = mid;
        		e = mid;
        	}
        	else {
        		ans = mid+1;
        		s = mid+1;
        	}
        }
        return ans;
    }
};

int main() {
	int n;
	cin >> n;
	vector<int> arr;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		arr.push_back(ele);
	}
	Solution solve;
	int ans = solve.peakIndexInMountainArray(arr);
	cout << ans << endl;
	return 0;
}
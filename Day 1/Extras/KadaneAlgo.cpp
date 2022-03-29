#include <bits/stdc++.h>
using namespace std;

int main() {
	int arr[] = {2, 4, -8, 9, 10, -2, 4, -20, 10};
	int n = 9;
	int start = 0, end = n-1;
	int curr_sum = arr[0], max_sum = arr[0];
	for(int i=1; i<n; i++) {
		curr_sum += arr[i];
		if(curr_sum < 0) {
			curr_sum = 0;
		}
		else {
			max_sum = max(curr_sum, max_sum);
		}
	}
	cout << "Shashank Sinha" << " 4th year" << endl;
	cout << "Kadane_Algorithm : " << max_sum << endl;
	return 0;
}
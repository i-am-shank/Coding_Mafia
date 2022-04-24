#include <bits/stdc++.h>
using namespace std;

float distance(int x1, int y1, int x2, int y2) {
	return (((y2-y1)*(y2-y1)) + ((x2-x1)*(x2-x1)));
}

int main() {
	int n, count = 0;
	cin >> n;
	while(n--) {
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		float l1 = distance(x1, y1, x2, y2);
		float l2 = distance(x2, y2, x3, y3);
		float l3 = distance(x3, y3, x1, y1);
		float arr[3] = {l1, l2, l3};
		sort(arr, arr+3);
		if(arr[0] + arr[1] == arr[2]) {
			count ++;
		}
	}
	cout << count << endl;
	return 0;
}
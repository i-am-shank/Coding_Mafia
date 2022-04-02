#include <bits/stdc++.h>
using namespace std;

int subsetSum(int input[], int start, int n, int** output, int k) {
    if (start == n) {    // Base case
        if (k == 0) {
            output[0][0] = 0;
            return 1;
        }
        else {
            return 0;
        }
    }
    int size1, size2, m=0;
    int** smallOutput1 = new int*[10000];
    int** smallOutput2 = new int*[10000];
    for(int i=0; i<10000; i++) {
    	smallOutput1[i] = new int[50];
    	smallOutput2[i] = new int[50];
    }
    // Recursion calls
    size1 = subsetSum(input, start+1, n, smallOutput1, k);  // excluding currrent element
    size2 = subsetSum(input, start+1, n, smallOutput2, k-input[start]); // including ..
    for (int i=0; i<size1; i++) {
        for (int j=0; j<=smallOutput1[i][0]; j++) {
            output[m][j] = smallOutput1[i][j];
        }
        m++;
    }
    for (int i=0; i<size2; i++) {
        output[m][0] = smallOutput2[i][0] + 1;
        output[m][1] = input[start];
        for (int j=1; j<=smallOutput2[i][0]; j++) {
            output[m][j+1] = smallOutput2[i][j];
        }
        m++;
    }
    for(int i=0; i<10000; i++) {
    	delete []smallOutput1[i];
    	delete []smallOutput2[i];
    }
    delete []smallOutput1;
    delete []smallOutput2;
    return m;
}

int main() {
  int input[20],length, k;
  int **output = new int*[10000];
  for(int i=0; i<10000; i++) {
  	output[i] = new int[50];
  }
  cin >> length;
  for(int i=0; i < length; i++){
  	cin >> input[i];
  }
  cin >> k;
  int size = subsetSum(input, 0, length, output, k);

  if(size > 0) { 
	for( int j = 1; j <= output[0][0]; j++) { 
		cout << output[0][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Time Complexity = O(M+N)
    // Space Complexity = O(M+N)
    
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int temp[m+n];
        int i=0, j=0, k=0;
        while(i<m && j<n) {
            if(nums1[i] <= nums2[j]) {
                temp[k++] = nums1[i++];
            }
            else {
                temp[k++] = nums2[j++];
            }
        }
        while(i < m) {
            temp[k++] = nums1[i++];
        }
        while(j < n) {
            temp[k++] = nums2[j++];
        }
        for(int i=0; i<k; i++) {
            nums1[i] = temp[i];
        }
        return ;
    }
};

int main() {
    Solution solve;
    int m, n;
    cin >> m >> n;
    vector<int> nums1, nums2;
    for(int i=0; i<m; i++) {
        int ele;
        cin >> ele;
        nums1.push_back(ele);
    }
    for(int i=m; i<m+n; i++) {
        nums1.push_back(0);
    }
    for(int i=0; i<n; i++) {
        int ele;
        cin >> ele;
        nums2.push_back(ele);
    }
    solve.merge(nums1, m, nums2, n);
    for(int i=0; i<m+n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class MedianFinder {
public:
    // Storing lower-half(smaller elements) of array in maxHeap
    // Storing upper-half(larger elements) of array in minHeap

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    MedianFinder() {
        
    }
    
    void addNum(int num) {
        maxHeap.push(num);
        // Top element of maxHeap can be a part of larger half elements.
        minHeap.push(maxHeap.top());
        maxHeap.pop();
        // Maintain balance between minHeap & maxHeap size.
        if(minHeap.size() > maxHeap.size()) {
            maxHeap.push(minHeap.top());
            minHeap.pop();
        }
    }
    
    double findMedian() {
        if(maxHeap.size() > minHeap.size()) {
            return maxHeap.top();
        }
        else {
            double ans = ((maxHeap.top() + minHeap.top())  /  2.0);
            return ans;
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

int main() {
	MedianFinder solve;
    int n, choice;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> choice;
        if(choice == 1) {
            int ele;
            cin >> ele;
            solve.addNum(ele);
        }
        else {
            double ans = solve.findMedian();
            cout << ans << endl;
        }
    }
    return 0;
}
// All operations with O(1) time complexity.. including get-minimum element().
// Extra O(N) space taken than previous approach..   MinStack.cpp

#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
	stack <int> s;
	stack <int> minEle;

    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(minEle.empty() || val<=minEle.top()) {
        	minEle.push(val);
        }
    }
    
    void pop() {
    	if(s.top() == minEle.top()) {
    		minEle.pop();
    	}
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return minEle.top();
    }
};

int main() {
	MinStack s;
	s.push(-2);
	s.push(0);
	s.push(-3);
	cout << s.top() << endl;
	cout << s.getMin() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.getMin() << endl;
	return 0;
}
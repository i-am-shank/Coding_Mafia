#include <bits/stdc++.h>
using namespace std;

class MyQueue {
public:
	stack<int> s;
    stack<int> temp;

    MyQueue() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        while(!s.empty()) {
        	temp.push(s.top());
        	s.pop();
        }
        int ans = 0;
        if(!temp.empty()) {
        	ans = temp.top();
        	temp.pop();
        }
        while(!temp.empty()) {
        	s.push(temp.top());
        	temp.pop();
        }
        return ans;
    }
    
    int peek() {
        while(!s.empty()) {
        	temp.push(s.top());
        	s.pop();
        }
        int ans = 0;
        if(!temp.empty()) {
        	ans = temp.top();
        }
        while(!temp.empty()) {
        	s.push(temp.top());
        	temp.pop();
        }
        return ans;
    }
    
    bool empty() {
        return s.size()==0;
    }
};

int main() {
	MyQueue q;
	q.push(1);
	q.push(2);
	cout << q.peek() << endl;
	cout << q.pop() << endl;
	cout << q.empty() << endl;
	return 0;
}
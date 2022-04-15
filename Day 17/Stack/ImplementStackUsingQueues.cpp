#include <bits/stdc++.h>
#include <queue>
using namespace std;

class MyStack {
public:
	queue<int> q, temp;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        while(q.size() > 1) {
        	temp.push(q.front());
        	q.pop();
	    }
	    int ans = 0;
	    if(!q.empty()) {
	    	ans = q.front();
	    	q.pop();
	    }
	    while(!temp.empty()) {
	    	q.push(temp.front());
	    	temp.pop();
	    }
	    return ans;
    }
    
    int top() {
        while(q.size() > 1) {
        	temp.push(q.front());
        	q.pop();
        }
        temp.push(q.front());
        int ans = 0;
        if(!q.empty()) {
        	ans = q.front();
        }
        q.pop();
        while(!temp.empty()) {
        	q.push(temp.front());
        	temp.pop();
        }
        return ans;
    }
    
    bool empty() {
        return q.size() == 0;
    }
};

int main() {
	MyStack s;
	s.push(1);
	s.push(2);
	cout << s.top() << endl;
	cout << s.pop() << endl;
	cout << s.empty() << endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:
	vector<int> v;

    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
    }
    
    void pop() {
        v.pop_back();
    }
    
    int top() {
        int ans = v[v.size()-1];
        return ans;
    }
    
    int getMin() {
        int ans = INT_MAX;
        for(int i=0; i<v.size(); i++) {
        	if(v[i] < ans) {
        		ans = v[i];
        	}
        }
        return ans;
    }
};

int main() {
	MinStack s;
	s.push(-2);
	s.push(0);
	s.push(-3);
	cout << s.getMin() << endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	cout << s.getMin() << endl;
	return 0;
}
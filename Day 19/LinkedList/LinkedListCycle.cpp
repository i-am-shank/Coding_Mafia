#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode*, int> ourmap;
        int count = 0;
        while(temp != NULL) {  // Either this loop terminates.. or condition terminates it.
        	if(ourmap.find(temp) != ourmap.end()) {  // Node already present
        		return true;
        	}
        	ourmap[temp] = 1;
        	temp = temp->next;
        }
        return false;
    }
};

int main() {
	Solution solve;
	int n;
	cin >> n;
	ListNode* head = new ListNode(0);
	ListNode* temp = head;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		temp->next = currNode;
		temp = temp->next;
	}
	int pos, k=0;
	cin >> pos;
	if(pos >= 0) {
		ListNode* cycleNode = head;
		while(k < pos) {
			k++;
			cycleNode = cycleNode->next;
		}
		temp->next = cycleNode;  // temp was storing tail node.. completed the cycle.
	}
	head = head->next;
	bool ans = solve.hasCycle(head);
	cout << (ans == true ? "Yes" : "No") << endl;
	return 0;
}
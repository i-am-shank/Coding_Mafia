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
    void deleteNode(ListNode* node) {
    	node->val = node->next->val;
        node->next = node->next->next;
        return;
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
	head = head->next;
	int nodeData;  // Is not a tail node
	cin >> nodeData;
	temp = head;
	while(temp->val != nodeData) {
		temp = temp->next;
	}
	ListNode* node = temp;
	solve.deleteNode(node);
	temp = head;
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
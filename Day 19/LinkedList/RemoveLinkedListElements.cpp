#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp!=NULL) {
        	if(temp->val == val) {
        		if(prev == NULL) {
        			head = temp->next;
        			temp->next = NULL;
        			temp = head;
        		}
        		else {
        			prev->next = temp->next;
        			temp = temp->next;
        		}
        	}
        	else {
        		prev = temp;
        		temp = temp->next;
        	}
        }
        return head;
    }
};

int main() {
	int n, val;
	cin >> n;
	ListNode* head = new ListNode();
	ListNode* temp = head;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		temp->next = currNode;
		temp = temp->next;
	}
	head = head->next;  // Ignoring the 1st node.. with default value 0.
	cin >> val;
	Solution solve;
	ListNode* ans = solve.removeElements(head, val);
	temp = ans;
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
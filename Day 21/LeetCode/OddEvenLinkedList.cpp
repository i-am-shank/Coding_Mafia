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
    ListNode* oddEvenList(ListNode* head) {
    	if(head == NULL) {
        	return head;
        }
        ListNode *evenHead = head->next;
        ListNode* oddTemp = head, *evenTemp = head->next;
        while(evenTemp && evenTemp->next && oddTemp && oddTemp->next) {
    		oddTemp->next = oddTemp->next->next;
    		evenTemp->next = evenTemp->next->next;
    		oddTemp = oddTemp->next;
    		evenTemp = evenTemp->next;
        }
        oddTemp->next = evenHead;
        return head;
    }
};

int main() {
	Solution solve;
	ListNode* head = new ListNode();
	ListNode* temp = head;
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		temp->next = currNode;
		temp = temp->next;
	}
	head = head->next;  // Removing 1st node with default data 0.
	ListNode* ans = solve.oddEvenList(head);
	temp = ans;
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
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
    ListNode* deleteDuplicates(ListNode* head) {
    	if(head==NULL  ||  head->next==NULL) {
    		return head;
    	}
        ListNode *ansTemp = head, *temp = head->next;
        while(temp != NULL) {
        	if(temp->val != ansTemp->val) {
        		ansTemp->next = temp;
        		ansTemp = ansTemp->next;
        	}
        	temp = temp->next;
        }
        ansTemp->next = NULL;
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
	head = head->next;  // Ignoring the 1st node.. with default value 0.
	ListNode* ans = solve.deleteDuplicates(head);
	temp = ans;
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
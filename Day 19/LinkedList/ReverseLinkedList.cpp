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
	// Iterative approach.. no recursion call
	// Time Complexity = O(N)
    ListNode* reverseList(ListNode* head) {
    	if(head == NULL) {
    		return head;
    	}
        ListNode *currN = head, *prevN = NULL, *nextN = head->next;
        while(nextN != NULL) {
        	ListNode *tempN = nextN->next;
        	nextN->next = currN;
        	currN->next = prevN;
        	prevN = currN;
        	currN = nextN;
        	nextN = tempN;
        }
        return currN;
    }

	// Brute-force bettered.. just a small change
	// The 2nd node.. actually stored in head->next.. is the tail we are finding out.
	// Time Complexity = O(N)
	ListNode* reverseBetter(ListNode* head) {
		if(head == NULL  ||  head->next == NULL) {  // Base case
    		return head;
    	}
    	ListNode* smallAns = reverseBetter(head->next);
    	head->next->next = head;  //  head->next = tailNode..
    	head->next = NULL;  // removing that connection with 2nd node of default list
    	return smallAns;
	}

    // Brute-force approach
    // Have to traverse the whole linked list each time.. to figure out tail.
    // Time Complexity = O(N^2)
    ListNode* reverseBF(ListNode* head) {
    	if(head == NULL  ||  head->next == NULL) {  // Base case
    		return head;
    	}
    	ListNode* smallAns = reverseBF(head->next);
    	ListNode* temp = smallAns;
    	while(temp->next != NULL) {  // Figuring out the tail of reversed small linked list
    		temp = temp->next;
    	}
    	temp->next = head;
    	head->next = NULL;  // head was still pointing to 2nd node of initial linked list.
    	return smallAns;
    }
};

int main() {
	int n;
	cin >> n;
	ListNode* head = new ListNode();
	ListNode* temp = head;  // for traversing head
	for(int i=0; i<n; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		temp->next = currNode;
		temp = temp->next;
	}
	head = head->next;  // Ignoring the 1st node ..with default value 0.
	Solution solve;
	ListNode* revHead = solve.reverseList(head);
	temp = revHead;  // For traversing revHead.
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
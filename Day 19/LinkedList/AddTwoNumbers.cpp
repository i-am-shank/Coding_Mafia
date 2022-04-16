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
	ListNode() : val(0), next(nullptr) {}  // default constructor.. 1st node has value 0.
	ListNode(int x) : val(x), next(nullptr) {}  // node value constructor
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum, carry = 0, digit;
        ListNode* ans = new ListNode();
        ListNode* tempAns = ans;  // for traversing ans.
        ListNode *temp1 = l1, *temp2 = l2;
        while((temp1 != NULL)  ||  (temp2 != NULL)  ||  (carry != 0)) {
        	sum = 0;
        	if(temp1 != NULL) {
        		sum += temp1->val;
        		temp1 = temp1->next;
        	}
        	if(temp2 != NULL) {
        		sum += temp2->val;
        		temp2 = temp2->next;
        	}
        	sum += carry;
        	carry = sum / 10;
        	digit = sum % 10;
        	ListNode* digitNode = new ListNode(digit);
        	tempAns->next = digitNode;
        	tempAns = tempAns->next;
        }
        return ans->next;  // Ignoring 1st node.. as it has a default value 0.
    }
};

int main() {
	Solution solve;
	int n1, n2;  // No. of nodes in Linkedlist1 & Linkedlist2
	cin >> n1 >> n2;
	ListNode* l1 = new ListNode();
	ListNode* l2 = new ListNode();
	ListNode* temp1 = l1;  // for traversing l1
	ListNode* temp2 = l2;  // for traversing l2
	for(int i=0; i<n1; i++) {
		int ele;
		cin >> ele;
		ListNode* eleNode1 = new ListNode(ele);
		temp1->next = eleNode1;
		temp1 = temp1->next;
	}
	for(int i=0; i<n2; i++) {
		int ele;
		cin >> ele;
		ListNode* eleNode2 = new ListNode(ele);
		temp2->next = eleNode2;
		temp2 = temp2->next;
	}
	ListNode* ans = solve.addTwoNumbers(l1->next, l2->next);
	ListNode* temp = ans;  // for traversing ans
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
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
	int length(ListNode* head) {
		int ans = 0;
		ListNode* temp = head;
		while(temp != NULL) {
			temp = temp->next;
			ans++;
		}
		return ans;
	}

public:

	ListNode *getIntersectionBetter(ListNode* headA, ListNode* headB) {
		int l1 = length(headA);
		int l2 = length(headB);
		ListNode* tempA = headA;
		ListNode* tempB = headB;
		if(l1 > l2) {
			int diff = l1-l2;
			for(int i=0; i<diff; i++) {
				tempA = tempA->next;
			}
		}
		else {
			int diff = l2-l1;
			for(int i=0; i<diff; i++) {
				tempB = tempB->next;
			}
		}
		while(tempA!=NULL  &&  tempB!=NULL) {
			if(tempA == tempB) {
				return tempA;
			}
			tempA = tempA->next;
			tempB = tempB->next;
		}
		return NULL;
	}

	// Time Complexity = O(N*M)
	// Space Complexity = O(1)

    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA = headA;
        while(tempA != NULL) {
        	ListNode* tempB = headB;
        	while(tempB != NULL) {
        		if(tempB == tempA) {
        			return tempB;
        		}
        		tempB = tempB->next;
        	}
        	tempA = tempA->next;
        }
        return NULL;
    }
};

int main() {
	Solution solve;
	int na, nb, intersectionVal, skipA, skipB;
	cin >> na >> nb >> skipA >> skipB;
	cin >> intersectionVal;
	ListNode* headA = new ListNode(0);
	ListNode* tempA = headA;
	ListNode* headB = new ListNode(0);
	ListNode* tempB = headB;
	for(int i=0; i<na; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		tempA->next = currNode;
		tempA = tempA->next;
	}
	for(int i=0; i<nb; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		tempB->next = currNode;
		tempB = tempB->next;
	}
	tempA = headA;
	tempB = headB;
	for(int i=1; i<skipA; i++) {
		tempA = tempA->next;
	}
	for(int i=1; i<skipB; i++) {
		tempB = tempB->next;
	}
	tempB->next = tempA->next;  // Creating intersection
	ListNode* ans = solve.getIntersectionBetter(headA, headB);
	ListNode* tempAns = ans;
	while(tempAns != NULL) {
		cout << tempAns->val << " ";
		tempAns = tempAns->next;
	}
	cout << endl;
	return 0;
}
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* temp1 = list1, *temp2 = list2, *temp = ans;
        while(temp1!=NULL  &&  temp2!=NULL) {
        	if(temp1->val <= temp2->val) {
        		temp->next = temp1;
        		temp1 = temp1->next;
        	}
        	else {
        		temp->next = temp2;
        		temp2 = temp2->next;
        	}
        	temp = temp->next;
        }
        if(temp1 != NULL) {
        	temp->next = temp1;
        }
        if(temp2 != NULL) {
        	temp->next = temp2;
        }
        ans = ans->next;
        return ans;
    }
};

int main() {
	Solution solve;
	int n1, n2;
	cin >> n1 >> n2;
	ListNode* list1 = new ListNode();
	ListNode* list2 = new ListNode();
	ListNode* temp1 = list1, *temp2 = list2;
	for(int i=0; i<n1; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		temp1->next = currNode;
		temp1 = temp1->next;
	}
	for(int i=0; i<n2; i++) {
		int ele;
		cin >> ele;
		ListNode* currNode = new ListNode(ele);
		temp2->next = currNode;
		temp2 = temp2->next;
	}
	list1 = list1->next;
	list2 = list2->next;
	ListNode* ans = solve.mergeTwoLists(list1, list2);
	ListNode* temp = ans;
	while(temp != NULL) {
		cout << temp->val << " ";
		temp = temp->next;
	}
	cout << endl;
	return 0;
}
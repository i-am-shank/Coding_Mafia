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
	ListNode* mergeSortedLL(ListNode* head1, ListNode* head2) {
		ListNode* ans = new ListNode();
		ListNode* temp = ans, *temp1 = head1, *temp2 = head2;
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

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* ans = new ListNode();
        ListNode* temp = ans;
        // Brute-force approach.. take pair by pair.. linked list selections
        int n = lists.size();
        if(n == 0) {
        	return ans->next;
        }
        ans = lists[0];
        for(int i=1; i<n; i++) {
        	ans = mergeSortedLL(ans, lists[i]);
        }
        return ans;
    }
};

int main() {
	int n;
	cin >> n;
	vector<ListNode*> lists;
	for(int i=0; i<n; i++) {
		int m; // length of ith linked list
		cin >> m;
		ListNode* head = new ListNode();
		ListNode* temp = head;
		for(int j=0; j<m; j++) {
			int ele;
			cin >> ele;
			ListNode* currNode = new ListNode(ele);
			temp->next = currNode;
			temp = temp->next;
		}
		head = head->next;
		lists.push_back(head);
	}
	Solution solve;
	ListNode* ans = solve.mergeKLists(lists);
	ListNode* ansTemp = ans;
	while(ansTemp != NULL) {
		cout << ansTemp->val << " ";
		ansTemp = ansTemp->next;
	}
	cout << endl;
	return 0;
}
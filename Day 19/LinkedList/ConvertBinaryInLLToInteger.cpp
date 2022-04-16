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
	ListNode* reverseLL(ListNode* head) {
		if(head==NULL || head->next==NULL) {
			return head;
		}
		ListNode* prevN = NULL, *currN = head, *nextN = head->next;
		while(nextN != NULL) {
			ListNode* temp = nextN->next;
			nextN->next = currN;
			currN->next = prevN;
			prevN = currN;
			currN = nextN;
			nextN = temp;
		}
		return currN;
	}

public:
    int getDecimalValue(ListNode* head) {
        ListNode* revHead = reverseLL(head);  // Easy to operate on reverse LL for conversion
        int multiplier = 1;  // pow(2,0)
        int ans = 0;
        ListNode* temp = revHead;
        while(temp != NULL) {
        	int digit = (temp->val) * multiplier;
        	ans += digit;
        	multiplier *= 2;  // Increasing power of 2..
        	temp = temp->next;
        }
        return ans;
    }
};

int main() {
	Solution solve;
	int n;
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
	head = head->next;  // Ignoring default 0 value node.
	int ans = solve.getDecimalValue(head);
	cout << ans << endl;
	return 0;
}
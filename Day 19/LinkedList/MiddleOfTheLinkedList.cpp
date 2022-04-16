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
    ListNode* middleNode(ListNode* head) {
        ListNode* fast = head, *slow = head;
        while(fast->next!=NULL  &&  fast->next->next!=NULL) {
            fast = fast->next->next;
            slow = slow->next;
        }
        if(fast->next == NULL) {  // Odd no. of nodes.. only 1 middle node.
            return slow;
        }
        return slow->next;  // Even no. of nodes.. 2 middle nodes.. return 2nd one
    }
};

int main() {
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
    head = head->next;
    Solution solve;
    ListNode* ans = solve.middleNode(head);
    temp = ans;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
    return 0;
}